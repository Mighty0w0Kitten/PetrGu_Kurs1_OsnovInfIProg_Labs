# цель по умолчанию (при вызове make или make task3)
# собираем программу task3 из объектного файла task3.o
task3: lychrel.c_main.o
	gcc -g -O0 -o task3 lychrel.c_main.o

#добавили ключи компилятора -Wall и -Wextra
#проверка кода на соответствие стандарту С89
main.o: lychrel.c_main.c
	gcc -g -O0 -c -Wall -Wextra -pedantic -pedantic-errors -std=c11 lychrel.c_main.c

# цель clean (при вызове make clean)
# удаляем программу и объектные файлы
clean:
	rm task3 *.o
