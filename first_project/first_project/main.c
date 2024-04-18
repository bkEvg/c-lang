//
//  main.c
//  first_project
//
//  Created by Кирилл Бауэр on 17.04.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int myStrLen(char *string){
    int i = 0;
    while (1) {
        char *addres = string + i;
        if (*addres != '\0'){
            i++;
        } else {
            break;
        }
    }
    return i;
}


int main(void){
    char string[10] = "";
    printf("%d", myStrLen(string));
    return 0;
    
}
