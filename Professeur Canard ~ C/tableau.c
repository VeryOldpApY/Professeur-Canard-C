#include <stdio.h>
#include "tableau.h"

void Tableau()
{
	//Déclaration des variables
	int nb = -1;
	//Boucle tant que l'utilisateur veut continuer.
	while (nb != 0)
	{
		//Demande à l'utilisateur de saisir la taille du tableau.
		printf("Entrer la taille de votre tableau : (max 10) (0 : Return)\n");
		scanf_s("%d", &nb);

		//Vérification de la taille du tableau, si 0 : l'utilisateur veut arrêter.
		if (nb == 0)
		{
			break;
		}

		//Déclaration des variables.
		int tab[10][10] = { 0 };
		float totalV = 0;
		float totalH = 0;
		
		//Boucle pour remplir le tableau.
		for (int i = 0; i < nb; i++)
		{
			for (int j = 0; j < nb; j++)
			{
				printf("Entrer le nombre : ");
				scanf_s("%d", &tab[i][j]);
			}
		}

		//Boucle qui fait la moyenne verticale et l'affiche.
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
		
		//Boucle qui fait la moyenne horizontale et l'affiche.
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
