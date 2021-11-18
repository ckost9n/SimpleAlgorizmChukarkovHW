//
//  MaxNumber.c
//  SimpleAlgorizmChukarkovHW
//
//  Created by Konstantin on 17.11.2021.
//

#include "MaxNumber.h"

int maxNumberInTwice(int x, int y);

int maxNumber(void) {
    
    int first;
    int second;
    int thirth;
    int fourth;
    int maxNum;
    
    printf("Задание: найти максимальное из четырех чисел.\n");
    printf("Введите число номер 1: ");
    scanf("%d", &first);
    printf("Введите число номер 2: ");
    scanf("%d", &second);
    printf("Введите число номер 3: ");
    scanf("%d", &thirth);
    printf("Введите число номер 4: ");
    scanf("%d", &fourth);
    
    maxNum = maxNumberInTwice(maxNumberInTwice(first, second), maxNumberInTwice(thirth, fourth));
    
    printf("Максимальное число = %i\n", maxNum);

    return 0;
}

int maxNumberInTwice(int x, int y) {

    while (x != y) {
        if (x > y) {
            y = x;
        } else {
            x = y;
        }
    }
    
    return x;
}
