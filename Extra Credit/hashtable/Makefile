# Makefile for 'list' module
#
# Thomas Kim, April 2016

CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -ggdb
PROG = hashtableTester
OBJS = hashtableTester.o hashtable.o
LIBS =

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $^ $(LIBS) -o $@

hashtableTester.o: hashtable.h
hashtable.o: hashtable.h

clean:
	rm -f *~
	rm -f *.o
	rm -f $(PROG)
