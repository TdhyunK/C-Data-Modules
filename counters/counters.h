/*
* counters.h - A header file for counters
*
* Thomas Kimm, April 2016
*/

#ifndef __COUNTERS_H
#define __COUNTERS_H
#include <stdbool.h>

/**************** global types ****************/
typedef struct item item_t;
typedef struct counters counters_t;

/**************** functions ****************/

/*
* Add an item into the counter with given key
*/
void counters_add(counters_t *ctrs, int key);

/*
* Get the item in counter with given key
* Returns the item with given key
*/
int counters_get(counters_t *ctrs, int key);

/*
* Delete the entire counter module
*/
void counters_delete(counters_t *ctrs);

/*
* Create new counter
*/
counters_t *counters_new(void);

#endif // __COUNTERS_H