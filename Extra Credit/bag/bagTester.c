/*
* bagTester.c - A tester for bag
*
* Thomas Kim, April 2016
*/

#include <stdio.h>
#include <stdlib.h>
#include "bag.h"

int main(){

	bag_t *bag;

	bag = bag_new(free);

	bag_insert(bag, "h");

	bag_insert(bag, "e");
	
	bag_insert(bag, "l");

	printf("Removed %s\n", (char*) bag_extract(bag));
	printf("Removed %s\n", (char*) bag_extract(bag));
	printf("Removed %s\n", (char*) bag_extract(bag));
	printf("Removed %s\n", (char*) bag_extract(bag));


	bag_insert(bag, "h");
	bag_insert(bag, "h");

	bag_delete(bag);
	printf("\n");
	printf("BAG WAS DELETED\n");
	printf("\n");

	bag_insert(bag, "l");
	bag_insert(bag, "w");

	printf("Removed %s\n", (char*) bag_extract(bag));
	printf("Removed %s\n", (char*) bag_extract(bag));
	printf("Removed %s\n", (char*) bag_extract(bag));



	return 0;

}

