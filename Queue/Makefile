.phony:
	clean

test: queue.o test_queue.o
	gcc $(cflags) queue.o test_queue.o -o test

queue.o: queue.c queue.h
	gcc $(cflags) -c queue.c

test_queue.o: test_queue.c queue.h
	gcc $(cflags) -c test_queue.c

clean:
	rm *.o *~
