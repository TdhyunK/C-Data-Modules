# Makefile for 'list' module
#
# Thomas Kim, April 2016

CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -ggdb
PROG = countersTester
OBJS = countersTester.o counters.o
LIBS =

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $^ $(LIBS) -o $@

countersTester.o: counters.h
counters.o: counters.h

clean:
	rm -f *~
	rm -f *.o
	rm -f $(PROG)
