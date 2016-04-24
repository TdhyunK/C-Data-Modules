/*
* Counters. c - A counter module
*
* Thomas Kim, April 2016
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "counters.h"

/**************** local types ****************/
typedef struct item {
	int count;
	int key;
	struct item *next;
} item_t;

/**************** global types ****************/
typedef struct counters{
	struct item *firstItem;
} counters_t;

/**************** counters_new ****************/
counters_t *counters_new(void){
	counters_t *counters = malloc(sizeof(counters_t));

	if(counters == NULL){
		return NULL;
	}

	else{
		counters->firstItem = NULL;
		return counters;
	}
	return NULL;
}


/**************** counters_add ****************/
void counters_add(counters_t *ctrs, int key){
	item_t *newItem;
	bool wasFound = false;

	newItem = malloc(sizeof(item_t));
	newItem->count = 1;
	newItem->key = key;
	newItem->next = NULL;

	if(ctrs->firstItem == NULL){
		ctrs->firstItem = newItem;
	}
	else{
		for(item_t *item = ctrs -> firstItem; item != NULL; item = item->next){
			if(item->key == key){
				item->count += 1;
				wasFound = true;
			}

		}

		if(wasFound == false){
			newItem->next = ctrs->firstItem->next; //Every other item insert
			ctrs->firstItem->next = newItem;
		}
	}

}

/**************** counters_get ****************/
int counters_get(counters_t *ctrs, int key){
	for(item_t *item = ctrs -> firstItem; item != NULL; item = item->next){
		if (item->key == key){
			return item->count;
		}
	}
	return 0;
	
}

/**************** counters_delete ****************/
void counters_delete(counters_t *ctrs){
	free(ctrs);
	ctrs = counters_new();
}

