#include <stdio.h>
#include "tableau.h"

void Tableau()
{
	int nb = -1;
	while (nb != 0)
	{
		printf("Entrer la taille de votre tableau : (max 10)\n");
		scanf_s("%d", &nb);
		if (nb == 0)
		{
			break;
		}

		int tab[10][10] = { 0 };
		float totalV = 0;
		float totalH = 0;
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
			totalV += moy / nb;
			printf("\n");
		}
		for (int i = 0; i < nb; i++)
		{
			float moy = 0;
			for (int j = 0; j < nb; j++)
			{
				moy += tab[j][i];
			}
			totalH += moy / nb;
			printf("(%.2f)  ", moy / nb);
		}
		if (totalH == totalV)
		{
			printf("(%.2f)", totalH);
		}
		else
		{
			printf("(Error)");
		}
		printf("`\n");
	}
}
