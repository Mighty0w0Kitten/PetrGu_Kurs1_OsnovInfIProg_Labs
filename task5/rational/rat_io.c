// rat_io.c
#include "rational.h"
#include <stdio.h>
#include <stdlib.h>

// Функция для преобразования строки в рациональное число
rational_t rat_parse(const char *str)
{
	long n, d = 1;
	if (sscanf(str, "%ld/%ld", &n, &d) != 2)
	{
		if (sscanf(str, "%ld", &n) != 1)
		{
			fprintf(stderr, "Ошибка ввода\n");
			exit(1);
		}
	}
	return rational(n, d);
}

// Функция для вывода рационального числа
void rat_print(rational_t r)
{
	if (rat_denom(r) == 1)
		printf("%ld", rat_num(r));
	else
		printf("%ld/%ld", rat_num(r), rat_denom(r));
}
