/*
* countersTester.c - A tester for counter module
*
* Thomas Kim, April 2016
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "counters.h"

int main(){

	counters_t *counters = counters_new(); 
	counters_add(counters, 1); 
	counters_add(counters, 1); 
	counters_add(counters, 1); 
	counters_add(counters, 1); 
	counters_add(counters, 2); 
	counters_add(counters, 2); 
	counters_add(counters, 3); 

	printf("Count for item 1: %d\n", counters_get(counters, 1)); 
	printf("Counter for item 2: %d\n", counters_get(counters, 2)); 
	printf("Counter for Item 3: %d\n", counters_get(counters, 3)); 

	counters_delete(counters); 
	 
	counters_add(counters, 1); 
	counters_add(counters, 1); 
	counters_add(counters, 2); 
	counters_add(counters, 2); 
	counters_add(counters, 2); 
	counters_add(counters, 3);
	counters_add(counters, 3); 

	printf("****************NEW TEST********************\n");

	printf("Counter for item 1: %d\n", counters_get(counters, 1)); 
	printf("Counter for item 2: %d\n", counters_get(counters, 2)); 
	printf("Counter for item 3: %d\n", counters_get(counters, 3)); 
	printf("Counter for item 4: %d\n", counters_get(counters, 4)); //Item does not exist.

	
}