#include <stdio.h>
#include "etoiles.h"

void etoiles(void)
{
	//Initie la variable.
	int nb = 0;
	int l;
	int sep = 1;

	//Récupère le nombre de l'utilisateur.
	printf("Entrez la taille du sapin : ");
	scanf_s("%d", &nb);

	//Boucle par rapport au nombre entré par l'utilisateur.
	for (int i = 1; i <= nb; i++)
	{
		//stock des espaces.
		sep += 2;

		//Affiche les espaces.
		for (int j = 1; j <= nb - i; j++)
		{
			printf(" ");
		}
		//Affiche les étoiles.
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		//Retour à la ligne.
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
	//Affiche Joyeux Noêl.
	printf("************* Joyeux Noël *************\n");
}