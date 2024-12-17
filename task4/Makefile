# Makefile для программы, вычисляющей простые числа

# Компилятор и флаги компиляции
CC = gcc
CFLAGS = -Wall -O2

# Цели
all: primes

# Компиляция программы primes
primes: primes.o calculate_primes.o
	$(CC) $(CFLAGS) -o primes primes.o calculate_primes.o

# Компиляция объекта для primes.c
primes.o: primes.c calculate_primes.h
	$(CC) $(CFLAGS) -c primes.c

# Компиляция объекта для calculate_primes.c
calculate_primes.o: calculate_primes.c calculate_primes.h
	$(CC) $(CFLAGS) -c calculate_primes.c

# Очистка скомпилированных файлов
clean:
	rm -f *.o primes

# Комментарии:
# 1. Цель "all" собирает основную программу primes.
# 2. Цели "primes.o" и "calculate_primes.o" создают объектные файлы для исходных кодов.
# 3. Цель "clean" удаляет скомпилированные файлы для очистки рабочей директории.
