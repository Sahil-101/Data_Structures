.PHONY:
	clean

cflags= -Wall -Wmissing-declarations -Wmissing-prototypes -fsanitize=address -fno-omit-frame-pointer

test: bst.o testbst.o queue.o
	gcc $(cflags) -g bst.o testbst.o queue.o -o test

bst.o: bst.c bst.h 
	gcc $(cflags) -g -c bst.c

testbst: testbst.c bst.h
	gcc $(cflags) -g -c test_queue.c

queue.o: queue.h queue.c
	gcc $(cflags) -g -c queue.c
	
clean:
	rm *.o *~ test
