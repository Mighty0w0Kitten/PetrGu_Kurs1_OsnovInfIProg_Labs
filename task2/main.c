/**
 * floor.c -- программа для расчета нужного этажа
 *
 * Copyright (c) 2024, Илья Рогозин <ilya.ro2002@mail.ru>
 *
 * This code is licensed under MIT license.
 */

#include<stdio.h>

int main()
{
    // Номер квартиры
    int flat_number;

    /* Число квартир на этаже */
    int flats_per_floor;

    /* Запрашиваем квартиру, в которой проживает адресат */
    printf("Введите номер интересующей квартиры: ");
    scanf("%d", &flat_number);

    /* Запрашиваем число квартир на этаже */
    printf("Введите число квартир на каждом этаже: ");
    scanf("%d", &flats_per_floor);

    /* Рассчитываем и выводим номер этажа */
    printf("Вам нужно подняться на %d этаж\n", (flat_number + flats_per_floor - 1)/flats_per_floor);
    /* printf("Вам нужно поднятся на %d этаж\n", ((flat_namber - 1)/flats_per_floor)+1 */
    return 0;
}
