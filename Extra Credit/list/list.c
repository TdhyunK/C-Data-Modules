/* 
 * list.c - simple list module.
 *
 * Thomas Kim, April 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/**************** local types ****************/
typedef struct listItem{
	char *string;
	void *data;
	struct listItem *next;
} listItem_t;

/**************** global types ****************/
typedef struct list{
	struct listItem *firstItem;
	void (*destructor)(void *data); 

} list_t;

/**************** prototype functions ****************/

int strcmp(const char *str1, const char *str2);
char *strcpy(char *dest, const char *src);
size_t strlen(const char *str);


/**************** list_new ****************/
/*
* Create a new list.
*/

list_t *list_new(void (*destructor) (void *data)){

	list_t *list = malloc(sizeof(list_t));

	if (list == NULL){
		return NULL; //error creating bag
	}
	else{
		//initialize contents of the bag
		list->firstItem = NULL;
		list->destructor = destructor;
		return list;
	}
 
}

/**************** list_find ****************/
/*
* Find an item in the list with given key.
*/

void *list_find(list_t *list, char *key){

	for(listItem_t *item = list->firstItem; item != NULL; item = item->next){
		if (strcmp(item->string, key) == 0){ //Checks if key already exists
			return item->data; //If key exists, return the data
		}
	}

	return NULL;
}

/**************** list_insert ****************/
/*
* Inserts an itme with given key and data into the list.
*/
bool list_insert(list_t *list, char *key, void *data){

	listItem_t *item = malloc(sizeof(listItem_t));

	if (item == NULL){ //Checks if any error in list creation
		return NULL;
	}
	else{
		item->string = malloc(strlen(key) + 1);
		if(list_find(list, key) == NULL){ //If list does not contain item with key
			strcpy(item->string, key);
			item->data = data;
				
			if(list->firstItem == NULL){ //First item insert

				list->firstItem = item;
			}

			else{
				item->next = list->firstItem;
				list->firstItem = item;
			}

			return true;

		}
		
	}
	return false;
}

/**************** list_delete ****************/

void list_delete(list_t *list){
	(*list->destructor)(list);
	list = list_new(list->destructor);
}
