/*
* hashtable.c - A hashtable module
*
* Thomas Kim, April 2016
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "hashtable.h"
#include "list.c"
#include "jhash.c"


/**************** Prototype Functions ****************/

int strcmp(const char *str1, const char *str2);
void *list_find(list_t *list, char *key);
bool list_insert(list_t *list, char *key, void *data);


/**************** local types ****************/
typedef struct hashTable{
	int num_slots;
	void (*destructor) (void *data);
	list_t *hashTable[]; 


} hashtable_t;


/**************** hashgable_new ****************/
hashtable_t *hashtable_new(const int num_slots, void (*destructor) (void *data)){


	hashtable_t *table = malloc(sizeof(hashtable_t));
	table->hashTable[num_slots] = calloc(num_slots, sizeof(list_t*));

	table->num_slots = num_slots;

	if(table == NULL){ 
		return NULL;
	}

	else{
		table->destructor = destructor;
		for(int i = 0; i < num_slots; i++){
			table->hashTable[i] = list_new(table->destructor);
		}

	}

	return table;

}

/**************** hashgable_find ****************/
void *hashtable_find(hashtable_t *ht, char *key){

	return list_find(ht->hashTable[JenkinsHash(key, ht->num_slots)], key); 

}

/**************** hashgable_insert ****************/
bool hashtable_insert(hashtable_t *ht, char *key, void *data){
	if(ht == NULL){
		return NULL;
	}

	else{
		if(hashtable_find(ht, key) == NULL){
			list_insert(ht->hashTable[JenkinsHash(key, ht->num_slots)], key, data);
			return true; //new item was inserted
		}
	}
	return false; //key already exists

}

/**************** hashable_delete ****************/
void hashtable_delete(hashtable_t *ht){

	for(int i = 0; i < ht->num_slots; i++){
		list_delete(ht->hashTable[i]);
	}
}




