# Makefile for 'list' module
#
# Thomas Kim, April 2016

CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -ggdb
PROG = bagTester
OBJS = bagTester.o bag.o
LIBS =

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $^ $(LIBS) -o $@

bagTester.o: bag.h
bag.o: bag.h

clean:
	rm -f *~
	rm -f *.o
	rm -f $(PROG)
