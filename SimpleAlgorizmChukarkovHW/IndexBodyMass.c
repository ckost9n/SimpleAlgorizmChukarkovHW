//
//  IndexBodyMass.c
//  SimpleAlgorizmChukarkovHW
//
//  Created by Konstantin on 18.11.2021.
//

#include "IndexBodyMass.h"

int indexBody(void) {
    
    float I, m, h;
    
    printf("Задание по вычислению индекса массы тела");
    printf("Ввведите массу тела в килограммах: ");
    scanf("\n%f", &m);
    printf("Ввведите Ваш рост в сантиметрах: ");
    scanf("\n%f", &h);
    
    h /= 100;
    I = m / (h * h);
    
    printf("\nИндекс массы тела = %f\n", I);
    if (I <= 16) {
        printf("Выраженный дефицит массы тела\n");
    } else if ((I < 16) && (I < 18.5)) {
        printf("Недостаточная (дефицит) масса тела\n");
    } else if ((I >= 18.5) && (I < 25)) {
        printf("Нормальная масса тела\n");
    } else if ((I >= 25) && (I < 30)) {
        printf("Избыточная масса тела (предожирение)\n");
    } else if ((I >= 30) && (I < 35)) {
        printf("Ожирение 1 степени\n");
    } else if ((I >= 35) && (I < 40)) {
        printf("Ожирение 2 степени\n");
    } else if (I >= 40) {
        printf("Ожирение 3 степени\n");
    } else {
        printf("Введены некоректные данные\n");
    }
    
    
    return 0;
}

