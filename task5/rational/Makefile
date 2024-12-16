# Makefile для сборки библиотеки librational
CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -pedantic -pedantic-errors -std=c11

rational.o: rational.c rational.h
	$(CC) $(CFLAGS) -c rational.c

rat_math.o: rat_math.c rational.h
	$(CC) $(CFLAGS) -c rat_math.c

rat_io.o: rat_io.c rational.h
	$(CC) $(CFLAGS) -c rat_io.c

librational.a: rational.o rat_math.o rat_io.o
	ar -rcs librational.a rational.o rat_math.o rat_io.o

librational.so: rational.o rat_math.o rat_io.o
	$(CC) -shared -o librational.so rational.o rat_math.o rat_io.o -fPIC

calc: calc.c
	cc -g -o calc calc.c -I./rational -L./rational -lrational
