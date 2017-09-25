README for bag.c example
Thomas Kim, April 2016

Compiling:
	mygcc bag.c bagTester.c -o bag

Usage:
/* 
 * bag.c - Create a bag module 
 * 
 * Thomas Kim, April 2016
 */

Example command lines:

bag.c

Assumptions:

- Bag is inserted into first item, and every following item is inserted as the item after the first item.

"Non"-Assumptions:

- All types of data can work as long as it is compatible with void *

Limitations:

- Limited to non random structures.
