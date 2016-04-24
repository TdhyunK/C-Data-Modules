README for counters.c 
Thomas Kim, April 2016

Compiling:
	mygcc counters.c countersTester.c -o counters

Usage:
/* 
 * counters.c - a counter module
 * 
 * usage: Create a counter module
 * Thomas Kim, April 2016
 */

Example command lines:

counters.c

Assumptions:

- Assumes that the highest count is the highest integer valaue

"Non"-Assumptions:

- All types of data can work as long as it is compatible with void *

Limitations:

- Only positive counts. Cannot subtract.
