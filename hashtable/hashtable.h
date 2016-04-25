/*
* hashtable.h
*
* Thomas Kim, April 2016
*/


#ifndef __HASHTABLE_H
#define __HASHTABLE_H
#include "list.h"
#include <stdbool.h>

/**************** global types ****************/
typedef struct hashItem hashItem_t;
typedef struct hashTable hashtable_t;
typedef struct list list_t;

/**************** functions ****************/


/*
* Create a new hashtable
*/
hashtable_t *hashtable_new(const int num_slots);

/*
* Find an item in the hastable with the given key
*/
void *hashtable_find(hashtable_t *ht, char *key);

/*
* Insert an item into the hashtable with the given key and data
*/
bool hashtable_insert(hashtable_t *ht, char *key, void *data);

/*
* Find the item in a given list with the key
*/
void *list_find(list_t *list, char *key);

/*
* Insert an item into the list with given key and data
*/ 
bool list_insert(list_t *list, char *key, void *data);

#endif // __COUNTERS_H