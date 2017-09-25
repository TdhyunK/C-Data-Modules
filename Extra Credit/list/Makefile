# Makefile for 'list' module
#
# Thomas Kim, April 2016

CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -ggdb
PROG = listTester
OBJS = listTester.o list.o
LIBS =

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $^ $(LIBS) -o $@

listTest.o: list.h
list.o: list.h

clean:
	rm -f *~
	rm -f *.o
	rm -f $(PROG)
