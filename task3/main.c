#include <stdio.h>
#include <limits.h> /*Для использования LONG_MAX*/

/*Объявляем функцию. Выводит все кандидаты в числа Лишрел из отрезка 1, 2, ..., last_number */
void show_lychrel_candidates(long last_number);
/*Объявляем подфункцию. Проверяет, является ли number кандидатом в числа Лишрел*/
int is_lychrel_candidate(long number);
/*Объявляем функцию. Возвращает обращение числа n*/
long reverse(long n);

int main()
{
	/*Получаем значение верхней границы рассматриваемой последовательности N*/
	long last_number;
	printf("Введите верхнюю границу отрезка поиска чисел Лишрел: ");
	scanf("%ld", &last_number);

	/*Выводим все кандидаты в числа Лишрел из отрезка 1, 2, ..., N*/
	show_lychrel_candidates(last_number);

	return 0;
}

/*Определение/тело функции*/
void show_lychrel_candidates(long last_number)
{
	/* TODO: реализация функции (todo-маркер, значит, что здесь нужно что-то сделать)*/
	/*Инициируем переменную number*/
	long number;
	/*цикл - проверяет каждое число от 1 до last_number(его указывает пользователь)*/
	for (number=1; number<=last_number; number++)
	{
		/*Нужно проверить и напечатать чило если отно является числом Лишрел*/
		/* Если оно является кандидатом в числа Лишрел, напечатаем его */
		/*Вызываем подфункцию*/
		if (is_lychrel_candidate(number))
		{
			printf("%ld\n", number);
		}
	}

}

/*Определение/тело подфункции*/
int is_lychrel_candidate(long number)
{
	/*Инициируем переменную n и присваиваем ей значение number*/
	long n = number;
	/*Инициируем переменную r и присваиваем ей результат функции reverse со значением n*/
	long r = reverse(n);

	/*цикл проверки на число Лишрел*/
	do
	{
		/*Если сумма числа и его обращения переполняет разрядную сетку, то считаем число искомым кондидатом и завершаем проверку*/
		if(n>LONG_MAX-r || r == -1)
		{
			return 1;
		}
		/*иначе вычисляем новое значение, складывая число с обращением*/
		n = n + r;
		/* Вычисляем обращение суммы */
		r = reverse(n);
	} while(n!=r);/*Повторяем пока число не совпадает с обращением*/

	/*Считаем, что проверяемое число - не число Лишрел и завершаем проверку*/
	return 0;
}

/*Определение/тело подфункции*/
long reverse(long n)
{
	/*Инициируем переменную r*/
	long r = 0;

	/*цикл переворачивает число (n и r меняются местами и по ходу цикла число переворачивается)*/
	do
	{
		if(r>(LONG_MAX-n%10)/10)
		{
			return -1;
		}
		r=r*10+n%10;
		n/=10;
	} while(n>0);

	/*возвращаем перевёрнутое число*/
	return r;
}