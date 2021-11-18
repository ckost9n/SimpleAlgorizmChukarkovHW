//
//  CalculateQuadraticEquation.c
//  SimpleAlgorizmChukarkovHW
//
//  Created by Konstantin on 18.11.2021.
//

#include "CalculateQuadraticEquation.h"
#include <math.h>

int calculateSquareEquation(int a, int b, int c, float* x1, float* x2);

int calculate(void) {
    
    float a, b, c, x1, x2;
    
    printf("Задание по вычислению корней квадратного уравнения вида: 'ax2 + bx + c = 0'");
    printf("\n Введите a: ");
    scanf("%f", &a);
    printf("\n Введите b: ");
    scanf("%f", &b);
    printf("\n Введите c: ");
    scanf("%f", &c);
    
    int result;
    result = calculateSquareEquation(a, b, c, &x1, &x2);
    switch (result) {
        case 0:
            printf("Уравнение имеет один корень: x = %f", x1);
            break;
        case 1:
            printf("Уравнение имеет два корня: x1 = %f, x2 = %f", x1, x2);
            break;
        case -1:
            printf("Уравнение не имеет корней");
            break;
        default:
            printf("Уравнение не имеет решений");
    }
    printf("\n");
    
    return 0;
    
}

int calculateSquareEquation(int a, int b, int c, float* x1, float* x2) {
    double D; //discriminant
    D = b * b - 4 * a * c;
    if (a == 0) {
        *x1 = -c / b;
        return 0;
    } else if (D > 0) {
        *x1 = (-b + sqrt(D)) / 2 * a;
        *x2 = (-b - sqrt(D)) / 2 * a;
        return 1;
    } else if (D == 0) {
        *x1 = -b / (2 * a);
        return 0;
    } else {
        // D < 0;
        return -1;
    }
}
