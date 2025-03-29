init.o: init.c
	gcc -c init.c
display.o: display.c
	gcc -c display.c
main.o: main.c display.h init.h
	gcc -c main.c
chess: init.o display.o main.o
	gcc init.o display.o main.o -o chess
