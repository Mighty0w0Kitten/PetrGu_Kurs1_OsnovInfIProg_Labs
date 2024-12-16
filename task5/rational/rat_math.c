// rat_math.c
#include "rational.h"

// Сложение рациональных чисел
rational_t rat_add(rational_t a, rational_t b)
{
	return rational(rat_num(a) * rat_denom(b) + rat_num(b) * rat_denom(a),rat_denom(a) * rat_denom(b));
}

// Вычитание рациональных чисел
rational_t rat_sub(rational_t a, rational_t b)
{
	return rational(rat_num(a) * rat_denom(b) - rat_num(b) * rat_denom(a),rat_denom(a) * rat_denom(b));
}

// Умножение рациональных чисел
rational_t rat_mul(rational_t a, rational_t b)
{
	return rational(rat_num(a) * rat_num(b), rat_denom(a) * rat_denom(b));
}

// Деление рациональных чисел
rational_t rat_div(rational_t a, rational_t b)
{
	return rational(rat_num(a) * rat_denom(b), rat_denom(a) * rat_num(b));
}
