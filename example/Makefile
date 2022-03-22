all: listener send

listener: listener.c broadcast.o
	gcc listener.c broadcast.o -o listener
	
send: send.c broadcast.o
	gcc send.c broadcast.o -o send

broadcast.o: ../broadcast.h ../broadcast.c
	gcc -c ../broadcast.c -o broadcast.o