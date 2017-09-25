README for list.c example
Thomas Kim, April 2016

Compiling:
	mygcc list.c listTester -o list

Usage:
/* 
 * list.c - a list module
 * 
 * usage: Create a list module
 * Thomas Kim, April 2016
 */

Example command lines:

list.c

Assumptions:

- Because it is a FIFO structure, it is under the assumption that it cannot be used
  in anything that needs a random structure.

"Non"-Assumptions:

- All types of data can work as long as it is compatible with void *

Limitations:

- Limited to only FIFO structures.
