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

	bag = bag_new();

	bag_insert(bag, "h");

	bag_insert(bag, "e");
	
	bag_insert(bag, "l");

	printf("Removed %s\n", (char*) bag_extract(bag));
	printf("Removed %s\n", (char*) bag_extract(bag));
	printf("Removed %s\n", (char*) bag_extract(bag));
	printf("Removed %s\n", (char*) bag_extract(bag));


	bag_insert(bag, "h");
	bag_insert(bag, "h");

	return 0;

}
