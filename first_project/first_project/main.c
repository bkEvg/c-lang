//
//  main.c
//  first_project
//
//  Created by Кирилл Бауэр on 17.04.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* number_x, int* number_y){
    int buffer = 0;
    buffer = *number_x;
    *number_x = *number_y;
    *number_y = buffer;
}

int main(void){
    int number_x = 7;
    int number_y = 6;
    swap(&number_x, &number_y);
    
    printf("%d ptr_x", number_x);
    
    printf("%d ptr_y", number_y);
    return 0;
}
