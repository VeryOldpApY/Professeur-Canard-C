#include <stdio.h>
#include "tableau.h"

void Tableau()
{
	int nb = 0;
	printf("Entrer la taille de votre tableau : (max 10)\n");
	scanf_s("%d", &nb);
	
	int tab[10][10] = {0};
	for (int i = 0; i < nb; i++)
	{
		for (int j = 0; j < nb; j++)
		{
			printf("Entrer le nombre : ");
			scanf_s("%d", &tab[i][j]);
		}
	}

	for (int i = 0; i < nb; i++)
	{
		float moy = 0;
		for (int j = 0; j < nb; j++)
		{
			moy += tab[i][j];
			printf("%d	", tab[i][j]);
		}
		printf("(%.2f)", moy / nb);
		printf("\n");
	}
	for (int i = 0; i < nb; i++)
	{
		float moy = 0;
		for (int j = 0; j < nb; j++)
		{
			moy += tab[i][j];
		}
		printf("(%.2f)  ", moy / nb);
	}
}
