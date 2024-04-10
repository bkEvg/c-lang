//
//  switch-case.c
//  test
//
//  Created by Кирилл Бауэр on 10.04.2024.
//

#include "switch-case.h"


int main(void) {
    int myVariable;
    scanf("%d", &myVariable);
    switch (myVariable) {
        case 4:
            printf("Its 4 \n");
        case 5:
            printf("its 5\n");
        default:
            printf("something else");
    }
}
