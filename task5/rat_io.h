#ifndef RAT_IO_H /*Если макрос RAT_IO_H ещё не определён*/
#define RAT_IO_H /*Определяем макрос RAT_IO_H, чтобы предотвратить повторное подключение*/

#include "rational.h"  // Подключаем заголовочный файл с определением типа rational_t

/* Прототип функции для ввода рационального числа из строки */
int rat_parse(const char *str, rational_t *rat);

/* Прототип функции для вывода рационального числа */
void rat_printf(rational_t rat);

#endif /* RAT_IO_H (Закрываем директиву защиты) */
