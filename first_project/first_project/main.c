//
//  main.c
//  first_project
//
//  Created by Кирилл Бауэр on 17.04.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverse(int*numbers, int size){
    int *left = numbers;
    int *right = numbers + size - 1;
    while (left < right) {
        int tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}


int main(void){
    int numbers[5] = {5,6,4,3,4};
    reverse(numbers, 5);
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    
}
