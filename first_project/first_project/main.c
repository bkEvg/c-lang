//
//  main.c
//  first_project
//
//  Created by Кирилл Бауэр on 17.04.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strip_string(char* str, int size){
    int i;
    for (i = 0; i<=size; ++i) {
        if (str[i] == '\n') {
            str[i] = '\0';
        }
    }
}

int main(void){
    char first_name[50];
    char last_name[50];
    char full_name[100];
    
    printf("Программа включена\nВведите свое имя: ");
    fgets(first_name, 50, stdin);
    strip_string(first_name, 50);
    printf("Введите свою фамилию: ");
    fgets(last_name, 50, stdin);
    strip_string(last_name, 50);
    full_name[0] = '\0';
    strncat(full_name, first_name, 100);
    strncat(full_name, " ", 100);
    strncat(full_name, last_name, 100);
    printf("%s", full_name);
    return 0;
}
