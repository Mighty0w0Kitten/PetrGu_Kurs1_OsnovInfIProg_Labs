// rational.c
#include "rational.h"
#include <stdlib.h> // Добавлено для labs
#include <stdio.h>

// Функция для нахождения НОД с использованием алгоритма Евклида
long gcd(long a, long b) {
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функция для создания рационального числа
rational_t rational(long n, long d) {
    if (d == 0) {
        fprintf(stderr, "Ошибка: деление на ноль\n");
        return (rational_t){0, 1};
    }
    long gcd_value = gcd(labs(n), labs(d)); // Заменено abs на labs
    n /= gcd_value;
    d /= gcd_value;
    if (d < 0) { // Приводим знак к числителю
        n = -n;
        d = -d;
    }
    if (n == 0) d = 1; // Нулевое значение -> 0/1
    return (rational_t){n, d};
}

// Функции для получения числителя и знаменателя
long rat_num(rational_t r) {
    return r.num;
}

long rat_denom(rational_t r) {
    return r.denom;
}

