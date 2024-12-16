# Цель по умолчанию (при вызове make или make task3)
# Сборка программы task3 из объектного файла main.o
task3: main.o
	gcc -g -O0 -o task3 main.o

# Добавлены ключи компилятора -Wall и -Wextra
# Проверка кода на соответствие стандарту C11
lychrel.o: main.c
	gcc -g -O0 -c -Wall -Wextra -pedantic -pedantic-errors -std=c11 main.c

# Цель clean (при вызове make clean)
# Удаление программы и объектных файлов
clean:
	rm task3 *.o
