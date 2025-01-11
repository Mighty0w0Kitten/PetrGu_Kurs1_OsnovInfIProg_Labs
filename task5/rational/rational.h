/*
 * #ifndef RATIONAL_H
 * Проверяет, не был ли ранее определён макрос RATIONAL_H.
 * Это необходимо, чтобы заголовочный файл не включался повторно в одном и том же файле исходного кода.
 * Если макрос RATIONAL_H ещё не определён, выполнение кода продолжается.
 */
#ifndef RATIONAL_H
/*
 * #define RATIONAL_H
 * Определяет макрос RATIONAL_H, чтобы при следующем включении этого файла компилятор
 * знал, что заголовочный файл уже был обработан, и пропустил его.
 * Это предотвращает дублирование определения структур, функций и других сущностей.
 */
#define RATIONAL_H

/*
 * typedef struct:
 * Определяет структуру данных для представления рационального числа.
 * Структура содержит два поля: числитель (num) и знаменатель (denom).
 * typedef позволяет создать новый тип данных "rational_t", который будет использоваться
 * для удобного представления рациональных чисел в программе.
 */
typedef struct
{
	int num;	/* Числитель рационального числа */
	unsigned int denom;	/* Знаменатель рационального числа */
}
rational_t;

/*
 * Возвращает рациональное число, получаемое как результат деления
 * n на d.
 */
rational_t rational(long n, long d);

/* Возвращает числитель рационального числа r. */
long rat_num(rational_t r);

/* Возвращает знаменатель рационального числа r. */
long rat_denom(rational_t r);

/*
 * #endif
 * Завершается блок условной компиляции, начатый с #ifndef.
 * Это означает, что весь код между #ifndef и #endif будет включён в компиляцию только в том случае,
 * если макрос RATIONAL_H ещё не был определён, предотвращая повторное включение этого заголовочного файла.
 */
#endif