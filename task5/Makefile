CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Цели по умолчанию
all: calc

# Сборка исполняемого файла calc
calc: rational calc.o
	$(CC) calc.o -L./rational -lrational -o calc

# Компиляция отдельных модулей
calc.o: calc.c rational/rational.h rational/rat_math.h rational/rat_io.h
	$(CC) $(CFLAGS) -I./rational -c calc.c -o calc.o

rational.o: rational/rational.c rational/rational.h
	$(CC) $(CFLAGS) -I./rational -c rational/rational.c -o rational.o

rat_math.o: rational/rat_math.c rational/rat_math.h rational/rational.h
	$(CC) $(CFLAGS) -I./rational -c rational/rat_math.c -o rat_math.o

rat_io.o: rational/rat_io.c rational/rat_io.h rational/rational.h
	$(CC) $(CFLAGS) -I./rational -c rational/rat_io.c -o rat_io.o

# Цель для сборки библиотеки в подкаталоге rational
.PHONY: rational
rational:
	cd rational && $(MAKE)

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
