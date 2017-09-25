/*
* bag.h - A header file for bag module
*
* Thomas Kim, April 2016
*/

#ifndef __BAG_H
#define __BAG_H

/**************** global types ****************/
typedef struct bag bag_t;

/*
* Remove an item from a bag
*/
void *bag_extract(bag_t *bag);

/*
* Insert an item with given data into bag
*/
void bag_insert(bag_t *bag, void *data);


/*
* Delete the hentire bag
*/
void bag_delete(bag_t *bag);


/*
* Create a new bag
*/
bag_t *bag_new(void (*destructor) (void *data));

#endif // __BAG_H