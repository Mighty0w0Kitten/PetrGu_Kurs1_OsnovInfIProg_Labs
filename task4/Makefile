# Makefile для программы, вычисляющей простые числа

# Компилятор и флаги компиляции
CC = gcc
CFLAGS = -Wall -O2

# Цели
all: primes

# Компиляция программы primes
primes: primes.o
	$(CC) $(CFLAGS) -o primes primes.o

# Компиляция объекта для primes.c
primes.o: primes.c
	$(CC) $(CFLAGS) -c primes.c

# Очистка скомпилированных файлов
clean:
	rm -f *.o primes

# Комментарии:
# 1. Цель "all" собирает основную программу primes.
# 2. Цель "primes.o" создаёт объектный файл для исходного кода primes.c.
# 3. Цель "clean" удаляет скомпилированные файлы для очистки рабочей директории.
