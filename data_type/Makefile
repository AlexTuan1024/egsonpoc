data.o:data.h data.c
	gcc -c data.c
main.o:data.h main.c
	gcc -c main.c
display:data.o main.o
	gcc data.o main.o -o display
