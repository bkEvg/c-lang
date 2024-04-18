//
//  main.c
//  first_project
//
//  Created by Кирилл Бауэр on 17.04.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* find(int *numbers, int size, int target){
    int *result;
    for (int i = 0; i < size; i++) {
        if (*(numbers+i) == target) {
            result = numbers+i;
            return result;
        }
    }
    return NULL;
}

int main(void){
    int numbers[] = {57,6,54,8,67,3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int *search_num = find(numbers, size, 8);
    if (search_num != NULL) {
        printf("Позиция символа который надо найти (%d): %p\n", 8, search_num);
        printf("Индекс в строке: %d\n", search_num - numbers);
    } else {
        printf("Число не найдено!\n");
    }
    return 0;
}
