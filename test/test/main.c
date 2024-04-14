//
//  main.c
//  test
//
//  Created by Кирилл Бауэр on 10.04.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strip_str(char *str, int size) {
    int i;
    for (i = 0; i < size; ++i) {
        if (str[i] == '\n') {
            str[i] = '\0';
            return;
        }
    }
}


int main(void) {
    char name[50];
    char last_name[50];
    char full_name[100];
    
    printf("Hello, could you please enter your name here: ");
    fgets(name, 50, stdin);
    strip_str(name, 50);
    if (strcmp(name, "Kirill") == 0) {
        printf("My name is Kirill too!\n");
    }
    else {
        printf("My name is different\n");
    }
    printf("Your name lenght is %lu long\n", strlen(name));
    printf("ENter your last name: ");
    fgets(last_name, 50, stdin);
    full_name[0] = '\0';
    strcat(full_name, name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("You full name is: %s", full_name);
    
    return 0;
}
