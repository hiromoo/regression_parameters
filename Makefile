regression_parameters: main.o functions.o
	gcc -o regression_parameters main.o functions.o

main.o: main.c
	gcc -c main.c

functions.o: functions.c functions.h
	gcc -c functions.c

run: regression_parameters
	./regression_parameters