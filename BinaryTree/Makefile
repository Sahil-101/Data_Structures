.phony:
	clean

test: bst.o testbst.o
	gcc $(cflags) bst.o testbst.o -g -o test

bst.o: bst.c bst.h
	gcc $(cflags) -g -c bst.c

testbst: testbst.c bst.h
	gcc $(cflags) -g -c test_queue.c

clean:
	rm *.o *~ test
