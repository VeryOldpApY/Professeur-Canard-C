#include "game_421.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game_421(void)
{
    const int nb_partie = 0;
    printf_s("Combien de partie voulez vous lancer ? : ");
    scanf_s("%d", &nb_partie);

    for(int i = 0; i < nb_partie; i++)
    {
        game();
    }
}

void game(void)
{
    srand(time(NULL));
    int des[] = {-1, -1, -1};

    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 3; i++)
        {
            if(des[i] == -1)
            {
                des[i] = (rand() % 6) + 1;
            }
        }
        printf_s("Des : %d %d %d\n", des[0], des[1], des[2]);
        *des = *verify_game(des);
    }
    if(des[0] != -1 && des[1] != -1 && des[2] != -1)
    {
        printf_s("Vous avez gagné !\n");
    }
    else
    {
        printf_s("Vous avez perdu !\n");
    }
    printf("\n\n\nAppuyez sur une touche pour continuer...");
    getch();
    system("cls");
}

int* verify_game(int des[])
{
    for(int i = 0; i < 3; i++)
    {
        if(des[i] != 1 && des[i] != 2 && des[i] != 4)
        {
            des[i] = -1;
        }
    }
    if(des[0] == des[1] || des[1] == des[2])
    {
        des[1] = -1;
    }
    if(des[0] == des[2] || des[1] == des[2])
    {
        des[2] = -1;
    }
    return des;
}
