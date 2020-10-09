CC=gcc

CFLAGS=-c -Wall

all: address

address: main.o function1.o function2.o function3.o function4.o
	   $(CC) main.o function1.o function2.o function3.o function4.o -o address

main.o: main.c
	$(CC) $(CFLAGS) main.c

function1.o: function1.c
	$(CC) $(CFLAGS) function1.c

function2.o: function2.c
	$(CC) $(CFLAGS) function2.c

function3.o: function3.c
	$(CC) $(CFLAGS) function3.c

function4.o: function4.c
	$(CC) $(CFLAGS) function4.c

clean:
	rm -rf *o address

