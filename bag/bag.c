/*
* bag.c - A bag module
*
* Thomas Kim, April 2016
*/

#include <stdio.h>
#include <stdlib.h>
#include "bag.h"


/**************** local types ****************/

typedef struct bagItem {
	void *data;
	struct bagItem *next;
} bagItem_t;

/**************** global types ****************/

typedef struct bag {
	struct bagItem *firstItem;
} bag_t;



/**************** bag_new ****************/

bag_t *bag_new(void){
	bag_t *bag = malloc(sizeof(bag_t));

	if (bag == NULL){
		return NULL; //error creating bag
	}
	else{
		//initialize contents of the bag
		bag -> firstItem = NULL;
		return bag;
	}
 }

/**************** bag_insert ****************/

void bag_insert(bag_t *bag, void *data){

	bagItem_t *newItem = malloc(sizeof(bagItem_t));
	newItem -> data = data;
	newItem -> next = NULL;

 	if (bag == NULL){ 
 	 	bag = bag_new();
 	}

 	else if(bag->firstItem == NULL){
 		bag->firstItem = newItem;

 	}

 	else{
 		newItem->next = bag->firstItem->next;
 		bag->firstItem->next = newItem;
 	}

 }

/**************** bag_extract ****************/

void *bag_extract(bag_t *bag){

	bagItem_t *deletedItem;
	void *returnData; 

	if(bag->firstItem == NULL){ //If the bag does not have any items
		return NULL;
	}
	else{
		deletedItem = bag->firstItem;
		returnData = deletedItem->data;
		bag->firstItem = bag->firstItem->next;
		free(deletedItem);
		return returnData;
	}
}

