CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Цели по умолчанию
all: calc

# Сборка исполняемого файла calc
calc: calc.o rational.o rat_math.o rat_io.o
	$(CC) calc.o rational.o rat_math.o rat_io.o -o calc

# Компиляция отдельных модулей
calc.o: calc.c rational.h rat_math.h rat_io.h
	$(CC) $(CFLAGS) -c calc.c -o calc.o

rational.o: rational.c rational.h
	$(CC) $(CFLAGS) -c rational.c -o rational.o

rat_math.o: rat_math.c rat_math.h rational.h
	$(CC) $(CFLAGS) -c rat_math.c -o rat_math.o

rat_io.o: rat_io.c rat_io.h rational.h
	$(CC) $(CFLAGS) -c rat_io.c -o rat_io.o

# Удаление всех сгенерированных файлов
clean:
	rm -f *.o calc





#Объяснения:
#1. Переменные:
#	- CC: Компилятор (gcc).
#	- CFLAGS: Флаги компиляции для предупреждений и стандарта языка.
#2. Цель all:
#	- По умолчанию собирает программу calc.
#3. Сборка исполняемого файла:
#	- Зависит от всех объектных файлов (calc.o, rational.o, rat_math.o, rat_io.o).
#4. Компиляция отдельных модулей:
#	- Каждый модуль компилируется отдельно с указанием зависимостей (например, rational.h).
#5. Очистка:
#	- Цель clean удаляет все объектные файлы и скомпилированный исполняемый файл.
#
