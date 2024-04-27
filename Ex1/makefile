OBJ_RECURSION = basicClassification.o advancedClassificationRecursion.o
OBJ_LOOP = basicClassification.o advancedClassificationLoop.o
LIBS_CMD =  loopd loops recursived recursives
PROGS_CMD = maindloop maindrec mains 
CFLAGS = -Wall -g
MATH = -lm

clean: 
	rm -f *.o *.a *.so $(PROGS_CMD)

all: $(LIBS_CMD) $(PROGS_CMD) 

loops: libclassloops.a
loopd: libclassloops.so
recursives: libclassrec.a
recursived: libclassrec.so


mains: main.o libclassrec.a
	gcc $(CFLAGS) -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	gcc $(CFLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	gcc $(CFLAGS) -o maindrec main.o ./libclassrec.so -lm

libclassrec.a: $(OBJ_RECURSION)
	ar -rcs libclassrec.a $(OBJ_RECURSION)

libclassrec.so: $(OBJ_RECURSION)
	gcc -shared  $(OBJ_RECURSION) -o libclassrec.so

libclassloops.a: $(OBJ_LOOP)
	ar -rcs libclassloops.a $(OBJ_LOOP) 

libclassloops.so: $(OBJ_LOOP)
		gcc -shared  $(OBJ_LOOP) -o libclassloops.so

main.o: main.c NumClass.h
	gcc $(CFLAGS) -c main.c $(MATH)

basicClassification.o: basicClassification.c NumClass.h
	gcc $(CFLAGS) -c basicClassification.c $(MATH)

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc $(CFLAGS) -c advancedClassificationLoop.c $(MATH)

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc $(CFLAGS) -c advancedClassificationRecursion.c $(MATH)
