// rational.h
#ifndef RATIONAL_H
#define RATIONAL_H

typedef struct
{
	int num;            // Числитель
	unsigned int denom; // Знаменатель
}
rational_t;

// Функции
rational_t rational(long n, long d);
long rat_num(rational_t r);
long rat_denom(rational_t r);

#endif
