#include <studio.h>
#include <stdlib.h>

typedef struct bagItem {
	void *data;
	struct bag *next;
} bagItem_t;

typedef struct bag {
	struct bagItem *firstItem;
} bag_t;


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

void bag_insert(bag_t *bag, void *data){
 	if (bag != NULL){ //if bag isn't empty, insert data 
 		bag->data  = data;
 	}

 }

void *bag_extract(bag_t *bag){

}