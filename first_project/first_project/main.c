//
//  main.c
//  first_project
//
//  Created by Кирилл Бауэр on 17.04.2024.
//

#include <stdio.h>

void singleplayer(void)
{
    printf("\tStarting a singleplayer\n");
}


void multiplayer(void)
{
    printf("\tStarting a multiplayer\n");
}


int main(void){
    int select;
    printf("Game is on! Please follow instructions.\n");
    printf("Choose one of game options: \n");
    printf("1 - Start a singleplayer mode\n");
    printf("2 - Start a multiplayer mode\n");
    printf("3 - Quit the game\n");
    scanf("%d", &select);
    
    switch (select) {
        case 1: {
            singleplayer();
            break;
        }
        case 2: {
            multiplayer();
            break;
        }
        case 3: {
            printf("Thanks for playing!");
            break;
        }
        default: {
            printf("Invalid input");
            break;
        }
    }
    return 0;
}
