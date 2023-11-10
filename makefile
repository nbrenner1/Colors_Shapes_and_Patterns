#makefile for lab8

all: lab8

lab8:
	gcc -c -o next.o next.c
	gcc -c -o next_color.o next_color.c
	gcc -c -o next_pattern.o next_pattern.c
	gcc -c -o next_shape.o next_shape.c
	gcc -c -o printall.o printall.c
	gcc next.o next_color.o next_pattern.o next_shape.o printall.o -o printall
run:
	./printall

clean:
	rm printall
	rm *.o
	
