.phony:
	clean

test: queue.o test_queue.o
	gcc $(cflags) queue.o test_queue.o -g -o test

queue.o: queue.c queue.h
	gcc $(cflags) -g -c queue.c

test_queue.o: test_queue.c queue.h
	gcc $(cflags) -g -c test_queue.c

clean:
	rm *.o *~ test
