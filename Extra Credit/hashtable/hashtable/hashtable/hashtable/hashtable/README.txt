README for hashtable.c example
Thomas Kim, April 2016

Compiling:
	mygcc hashtable.c hashtableTester.c -o hashtable

Usage:
/* 
 * hashtable.c - a hash table module
 * 
 * Thomas Kim, April 2016
 */

Example command lines:

hashtable.c

Assumptions:

- Jenkins hash works as according
- Did not write Jenkins hash and used it from Professor Kotz

"Non"-Assumptions:

- All types of data can work as long as it is compatible with void *

Limitations:
- Limited to only void * compatible data types.
