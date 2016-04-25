/*
* list.h - header file for list module
*
* Thomas Kim April 2016
*/ 

#ifndef __LIST_H
#define __LIST_H
#include <stdbool.h>

/**************** global types ****************/
typedef struct list list_t;

/**************** functions ****************/
/*
* Create an empty list
* Return NULL if error
*/
list_t *list_new(void (*destructor) (void *data));

/* 
* Find an item in the list with given key
*/
void *list_find(list_t *list, char *key);

/*
* Insert item into list with given key and data
* Return true if inserted successfully, false if unsuccesful
*/
bool list_insert(list_t *list, char *key, void *data);

/*
* Delete the entire list
*/
void list_delete(list_t *list);

#endif // __LIST_H