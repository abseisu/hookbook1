# makefile
# Adnan Bseisu, dab262
# CPSC 223, PSET 3
# 3/11
# Creates a target HookBook which can be executed to run the program


CC = gcc
CFLAGS = -std=c17 -Wall -Werror -pedantic -g

HookBook : pirate_list.o hookbook.o pirate.o libhookbook.o
	$(CC) $(CFLAGS) pirate_list.o hookbook.o pirate.o libhookbook.o -o HookBook
	rm -f pirate_list.o hookbook.o pirate.o libhookbook.o

pirate.o: pirate.c pirate.h 
	$(CC) $(CFLAGS) -c pirate.c

libhookbook.o: libhookbook.c libhookbook.h 
	$(CC) $(CFLAGS) -c libhookbook.c

pirate_list.o: pirate_list.c pirate_list.h pirate.h
	$(CC) $(CFLAGS) -c pirate_list.c

hookbook.o: hookbook.c pirate_list.h pirate.h
	$(CC) $(CFLAGS) -c hookbook.c

clean:
	rm -f pirate_list.o hookbook.o pirate.o libhookbook.o HookBook
