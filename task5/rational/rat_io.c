#include "rat_io.h"   /* Подключаем заголовочный файл для функций ввода/вывода рациональных чисел */
#include "rational.h" /**/
#include <stdio.h>     /* Для работы с вводом/выводом */
#include <stdlib.h>    /* Для стандартных функций, таких как exit */
#include <string.h>    /* Для работы с строками */

/*
 * Функция для преобразования строки в рациональное число
 * str - строка, представляющая рациональное число (например, "5/7" или "3")
 * rat - указатель на переменную типа rational_t, в которую будет записано результат
 * Возвращает 0 в случае успешного преобразования или -1 в случае ошибки (например, если формат строки неправильный)
 */
int rat_parse(const char *str, rational_t *rat) {
	int num, denom;

	/* Пробуем прочитать строку как дробь (формат "числитель/знаменатель") */
	if (sscanf(str, "%d/%d", &num, &denom) == 2)
	{
		/* Если строка в формате дроби "числитель/знаменатель" */
		if (denom == 0)
		{
			return 0; /* Ошибка: деление на ноль */
		}
		*rat = rational(num, denom); /* Создаём рациональное число с указанным числителем и знаменателем */
		return 1;
	}
	/* Если не получилось, пробуем прочитать строку как целое число */
	else if (sscanf(str, "%d", &num) == 1)
	{
		*rat = rational(num, 1); /* Создаём рациональное число с знаменателем 1 */
		return 1;
	}
	return 0; /* Ошибка: строка не соответствует ожидаемому формату */
}

/*
 * Функция для вывода рационального числа
 * rat - рациональное число, которое нужно вывести
 * Если знаменатель равен 1, выводим только числитель, иначе выводим дробь в формате "числитель/знаменатель"
 */
void rat_printf(rational_t rat) {
	if (rat_denom(rat) == 1)
	{
		/* Если знаменатель равен 1, выводим только числитель (целое число) */
		printf("%ld", rat_num(rat));
	}
	else
	{
		/* Иначе выводим рациональное число в виде дроби "числитель/знаменатель" */
		printf("%ld/%ld", rat_num(rat), rat_denom(rat));
	}
}
