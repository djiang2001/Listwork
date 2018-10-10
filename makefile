all:main.o list.o
	gcc -o Test main.o list.o

main.o: main.c list.h
	gcc -c main.c

list.o: list.c list.h
	gcc -c list.c

run:
	./Test

clean:
	rm *.o
