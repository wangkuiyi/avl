CC=gcc
CFLAGS=-g3

all: avl_test

test: all
	valgrind -q --leak-check=yes ./avl_test

avl_test: avl_test.o avl.o
	$(CC) $(CFLAGS) -o $@ $^

avl_test.o avl.o: avl.h

clean:
	$(RM) avl_test *.o
