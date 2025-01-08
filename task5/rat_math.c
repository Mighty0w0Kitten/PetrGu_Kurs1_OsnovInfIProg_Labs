#include "rat_math.h"
#include "rational.h"
/* Подключение заголовочного файла с определением типа rational_t и функций для работы с рациональными числами */
#include <stdio.h>     /* Для отладки и ввода/вывода */
#include <stdlib.h>    /* Для стандартных функций (например, exit) */

rational_t rat_from_int(int num) {return rational(num, 1);}  // Преобразуем целое число в рациональное}

/* Функция сложения двух рациональных чисел */
rational_t rat_add(rational_t a, rational_t b){
/*
Формула для сложения дробей:
результат числителя = (числитель первой дроби * знаменатель второй) + (числитель второй дроби * знаменатель первой)
результат знаменателя = знаменатель первой дроби * знаменатель второй
*/

	return rational(rat_num(a) * rat_denom(b) + rat_num(b) * rat_denom(a), rat_denom(a) * rat_denom(b));
}

/* Функция вычитания двух рациональных чисел */
rational_t rat_sub(rational_t a, rational_t b){
/*
Формула для вычитания дробей:
результат числителя = (числитель первой дроби * знаменатель второй) - (числитель второй дроби * знаменатель первой)
результат знаменателя = знаменатель первой дроби * знаменатель второй
*/
	return rational(rat_num(a) * rat_denom(b) - rat_num(b) * rat_denom(a), rat_denom(a) * rat_denom(b));
}

/* Функция умножения двух рациональных чисел */
rational_t rat_mul(rational_t a, rational_t b){
/*
Формула для умножения дробей:
результат числителя = числитель первой дроби * числитель второй дроби
результат знаменателя = знаменатель первой дроби * знаменатель второй дроби
*/
	return rational(rat_num(a) * rat_num(b), rat_denom(a) * rat_denom(b));
}

/* Функция деления двух рациональных чисел */
rational_t rat_div(rational_t a, rational_t b){
/*
Формула для деления дробей:
результат числителя = числитель первой дроби * знаменатель второй дроби
результат знаменателя = знаменатель первой дроби * числитель второй дроби
*/
	return rational(rat_num(a) * rat_denom(b), rat_denom(a) * rat_num(b));
}

long int rat_num(rational_t rat) {
	return rat.num; /* Возвращаем числитель */
}

long int rat_denom(rational_t rat) {
	return rat.denom; /* Возвращаем знаменатель */
}
