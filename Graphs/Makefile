.PHONY:
	clean

cflags= -Wall -Wmissing-declarations -Wmissing-prototypes -fsanitize=address -fno-omit-frame-pointer

test: graph.o testgraph.o
	gcc $(cflags) -g bst.o testbst.o -o test

graph.o: graph.c graph.h 
	gcc $(cflags) -g -c graph.c

testgraph.o: testgraph.c
	gcc $(cflags) -g -c testgraph.c
	
clean:
	rm *.o *~ test
