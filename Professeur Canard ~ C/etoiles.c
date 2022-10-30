#include <stdio.h>
#include "etoiles.h"

void Etoiles()
{
	//Initie la variable.
	int nb = 0;
	int i, j, k, l;
	int sep = 1;

	//R�cup�re le nombre de l'utilisateur
	printf("Entrez la taille du sapin : ");
	scanf_s("%d", &nb);

	//Boucle par rapport au nombre entr� par l'utilisateur.
	for (i = 1; i <= nb; i++)
	{
		//stock des espaces.
		sep += 2;

		//Affiche les espaces.
		for (j = 1; j <= nb - i; j++)
		{
			printf(" ");
		}
		//Affiche les �toiles.
		for (k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		//Retour � la ligne.
		printf("\n");
	}

	//Affiche la base du sapin.
	for (l = 0; l <= sep / 2 - 3; l++)
	{
		printf(" ");
	}
	printf("***\n");
	for (l = 0; l <= sep / 2 - 3; l++)
	{
		printf(" ");
	}
	printf("************* Joyeux Noel *************\n");
}
