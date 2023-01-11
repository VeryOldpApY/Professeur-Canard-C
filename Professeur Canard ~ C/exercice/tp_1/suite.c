#include <stdio.h>
#include "suite.h"

void suite(void)
{
	//Déclaration des variables.
    int nb = 0;
	//Tant que l'utilisateur souhaite continuer.
    do
    {
		//Déclaration des variables.
		//Demande à l'utilisateur un nombre.
        printf("Entrez le nombre de terme de la suite a calculer n avec n > 0 (0 : Return) : ");
        scanf_s("%d", &nb);
		
		//Vérifie que le nombre est positif.
        if (nb < 0)
        {
            printf("Le nombre doit être positif.\n");
        }
        else
        {
	        float total = 0;
	        //Lance le calcul.
            for (int i = 1; i <= nb; i++)
            {
                total += 1. / i;
            }
			//Affiche le résultat.
            printf("U%d est : %.4f \n", nb, total);
        }
    } while (nb != 0);
}