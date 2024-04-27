CFLAGS = -Wall -g

clean:
	rm -f *.o *.so connections

all: my_mat.a connections

connections: main.o my_mat.a
	gcc $(CFLAGS) -o connections main.o my_mat.a

main.o: main.c my_mat.h
	gcc $(CFLAGS) -c main.c -lm

my_mat.o: my_mat.c my_mat.h
	gcc $(CFLAGS) -c my_mat.c -lm

my_mat.a: my_mat.o
	ar -rcs my_mat.a my_mat.o