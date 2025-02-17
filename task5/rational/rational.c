#include "rational.h"  /* Подключение заголовочного файла с определением rational_t и прототипами функций */
#include <stdio.h>     /* Для функций ввода-вывода, таких как printf */
#include <stdlib.h>    /* Для функций обработки ошибок, таких как exit */

/* Функция для нахождения НОД двух чисел */
long gcd(long a, long b)
{
	while (b != 0)
	{
		long temp = b;
		b = a % b; /* % - находит остаток от деления */
		a = temp;
	}
	return a;
}

/* Функция-конструктор для создания рационального числа */
rational_t rational(long num, long denom) {
	/* Инициализация числителя и знаменателя уже производится при передаче аргументов в функцию. */

	/* Проверка дроби на ноль в знаменатиле*/
	if (denom == 0)
	{
		printf("Ошибка: деление на ноль\n");
		exit(1); /* Завершаем программу с кодом ошибки 1 */
	}

	/* Приведение нулевой дроби к виду 0/1 */
	if (num == 0)
	{
		denom = 1;
	}

	// Определяем знак дроби
	if (denom < 0)
	{
		num = -num; // Переносим знак в числитель
		denom = -denom; // Делаем знаменатель положительным
	}

	// Сокращение дроби
	long gcd_val = gcd(num, denom); // Находим НОД числителя и знаменателя
	num /= gcd_val; // Делим числитель на НОД
	denom /= gcd_val; // Делим знаменатель на НОД denom /= gcd_val; // Делим знаменатель на НОД

	/* Создание структуры рационального числа с числителем и знаменателем */
	rational_t result = {num, denom}; /* Инициализируем структуру rational_t с заданными значениями */
	return result; /* Возвращаем созданное рациональное число */
}
