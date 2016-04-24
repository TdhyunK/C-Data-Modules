/* 
 * listTester.c - list tester 
 *
 * Thomas Kim, April 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

int main(){
	list_t *list;
	list = list_new();
	printf("Find testing: %s\n", (char*)list_find(list, "hell"));
	list_insert(list, "hello", "damian");
 	list_insert(list, "hell", "thomas");
 	list_insert(list, "what", "brian");
 	list_insert(list, "what", "thomas");
 	printf("Find testing: %s\n", (char*)list_find(list, "hell"));
 	printf("Find testing: %s\n", (char*)list_find(list, "helldfsd")); 	
 	printf("Find testing: %s\n", (char*)list_find(list, "what")); 	
 	printf("Find testing: %s\n", (char*)list_find(list, "doesn't exist")); 	

}

