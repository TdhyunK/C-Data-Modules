/*
* HashtableTester.c - A tester for hashtables
*
* Thomas Kim, April 2016
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "hashtable.h"
#include "list.h"


int main(){
	hashtable_t *table;
	table = hashtable_new(10);
	hashtable_find(table, "hi");
	hashtable_insert(table, "hello", "1");
	hashtable_insert(table, "bird", "2");
	hashtable_insert(table, "cat", "2");
	hashtable_insert(table, "dog", "2");
	hashtable_insert(table, "lol", "2");
	hashtable_insert(table, "asdf", "2");	
	
	if(hashtable_find(table, "does not exist") == NULL){ //Tests item that does not exist
		printf("Item does not exist. Return value is NULL.\n");
	}

	printf("%s\n", (char*) hashtable_find(table, "hello")); 
	printf("%s\n", (char*) hashtable_find(table, "bird"));
	printf("%s\n", (char*) hashtable_find(table, "cat"));

	return 0;
}