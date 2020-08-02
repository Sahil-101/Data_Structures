.Phony:
	clean

cflags= -Wall -Wmissing-declarations -Wmissing-prototypes -fsanitize=address -fno-omit-frame-pointer

test: teststack.o stack.o
	gcc $(cflags) -g stack.o teststack.o -o test

teststack.o: teststack.c stack.h
	gcc $(cflags) -g -c teststack.c

stack.o: stack.c stack.h
	gcc $(cflags) -g -c stack.c

isbalanced:	stack.o isbalanced.o
	gcc $(cflags) -g stack.o isbalanced.o -o isbalanced

isbalanced.o: isbalanced.c stack.h
	gcc $(cflags) -g -c isbalanced.c

clean:
	rm *.o *~ isbalanced test
