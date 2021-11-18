//
//  main.c
//  SimpleAlgorizmChukarkovHW
//
//  Created by Konstantin on 17.11.2021.
//

#include <stdio.h>
#include "MaxNumber.h"
#include "Exchange.h"
#include "CalculateQuadraticEquation.h"
#include "IndexBodyMass.h"

// Задание выполнил Чукарьков Константин

void mainMenu(void);

int main(int argc, const char * argv[]) {
    
    int sel;
    
    do {
        mainMenu();
        scanf("\n%i", &sel);
        switch (sel) {
            case 1:
                indexBody();
                break;
            case 2:
                maxNumber();
                break;
            case 3:
                exchange();
                break;
            case 4:
                exchange();
                break;
            case 0:
                printf("Bye!");
                return 0;
            default:
                printf("Некорректный ввод!\n");
                break;
        }
    } while (sel != 0);

    return 0;
}

void mainMenu(void) {
    printf("\nДля выбора задания нажмите: \n");
    printf("1 - Задание 1\n");
    printf("2 - Задание 2\n");
    printf("3 - Задание 3\n");
    printf("4 - Задание 4\n");
    printf("0 - Для завершения программы\n\n");
}
