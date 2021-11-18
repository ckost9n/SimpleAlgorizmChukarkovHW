//
//  Exchange.c
//  SimpleAlgorizmChukarkovHW
//
//  Created by Konstantin on 17.11.2021.
//

#include "Exchange.h"
#include <limits.h>

// Еще думал над вариантом с реверсом, но не так ничего и не придумал.

void menu(void);
void exchangeBit(int *x, int *y);
void exchangeWithThirthValue(int *x, int *y);
void exchangeAcrossDischarge(int *x, int *y);
void exchangeWithMathOperation(int *x, int *y);

int exchange(void) {
    
    int x;
    int y;
    int sel;
    
    printf("Задание по обмену значениями переменных");
    printf("Далее нужно ввести 2 числа и мы поменяем их местами\n");
    printf("Введите первое число: ");
    scanf("\n%i", &x);
    printf("Введите первое число: ");
    scanf("\n%i", &y);
    
    do {
        menu();
        scanf("\n%i", &sel);        
        switch (sel) {
            case 1:
                printf("\nX = %d, Y = %d\n", x, y);
                exchangeWithThirthValue(&x, &y);
                printf("X = %d, Y = %d\n\n", x, y);
                break;
            case 2:
                printf("\nX = %d, Y = %d\n", x, y);
                exchangeBit(&x, &y);
                printf("X = %d, Y = %d\n\n", x, y);
                break;
            case 3:
                printf("\nX = %d, Y = %d\n", x, y);
                exchangeAcrossDischarge(&x, &y);
                printf("X = %d, Y = %d\n\n", x, y);
                break;
            case 4:
                printf("\nX = %d, Y = %d\n", x, y);
                exchangeWithMathOperation(&x, &y);
                printf("X = %d, Y = %d\n\n", x, y);
                break;
            case 0:
                return 0;
            default:
                printf("Не корректный ввод!\n");
                break;
        }
    } while (sel != 0);

    return 0;
}

void menu(void) {
    printf("\nВыбирите метод сравнения: \n");
    printf("1 - сравнение с использованием третьей переменной\n");
    printf("2 - побитовое сравнение\n");
    printf("3 - сравнение через разряд\n");
    printf("4 - сравнение путем сложения и вычитания\n");
    printf("0 - для выхода\n\n");
}

void exchangeWithThirthValue(int *x, int *y) {
    int z;
    
    z = *x;
    *x = *y;
    *y = z;
}

void exchangeBit(int *x, int *y) {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

void exchangeAcrossDischarge(int *x, int *y) {
    *x = INT_MAX - *x;
    *y = *y - *x;
    *x = *y + *x;
    *y = INT_MAX - *x + *y;
}

void exchangeWithMathOperation(int *x, int *y) {
    *x = *y - *x;
    *y = *y - *x;
    *x = *x + *y;
}

