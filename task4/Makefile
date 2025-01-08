# Makefile для программы, вычисляющей простые числа

# Компилятор и флаги компиляции
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Файлы и цели
PRIMES_EXEC = primes
GOLDBACH_EXEC = goldbach
PRIMES_OBJS = primes.o calculate_primes.o
GOLDBACH_OBJS = goldbach.o calculate_primes.o

# Сборка всех целей
all: $(PRIMES_EXEC) $(GOLDBACH_EXEC)
# Цель all собирает обе программы: primes и goldbach.
# Используется как псевдоцель для сборки всех файлов за один вызов.

# Сборка программы primes
$(PRIMES_EXEC): $(PRIMES_OBJS)
	$(CC) $(CFLAGS) -o $@ $^
# Цель primes собирает исполняемый файл primes из объектов primes.o и calculate_primes.o.

# Сборка программы goldbach
$(GOLDBACH_EXEC): $(GOLDBACH_OBJS)
	$(CC) $(CFLAGS) -o $@ $^
# Цель goldbach собирает исполняемый файл goldbach из объектов goldbach.o и calculate_primes.o.

# Компиляция исходников
primes.o: primes.c calculate_primes.h
	$(CC) $(CFLAGS) -c primes.c
# Цель primes.o компилирует исходный файл primes.c в объектный файл primes.o.

calculate_primes.o: calculate_primes.c calculate_primes.h
	$(CC) $(CFLAGS) -c calculate_primes.c
# Цель calculate_primes.o компилирует исходный файл calculate_primes.c в объектный файл calculate_primes.o.

goldbach.o: goldbach.c calculate_primes.h
	$(CC) $(CFLAGS) -c goldbach.c
# Цель goldbach.o компилирует исходный файл goldbach.c в объектный файл goldbach.o.

# Удаление скомпилированных файлов
clean:
	rm -f $(PRIMES_OBJS) $(GOLDBACH_OBJS) $(PRIMES_EXEC) $(GOLDBACH_EXEC)
# Цель clean удаляет все объектные файлы (.o) и исполняемые файлы primes и goldbach.
