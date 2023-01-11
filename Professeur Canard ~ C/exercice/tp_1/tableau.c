#include <stdio.h>
#include "tableau.h"

void tableau(void)
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
		float total_v = 0;
		float total_h = 0;
		
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
			total_v += moy / nb;
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
			total_h += moy / nb;
			printf("(%.2f)  ", moy / nb);
		}
		if (total_h == total_v)
		{
			printf("(%.2f)", total_h);
		}
		else
		{
			printf("(Error)");
		}
		printf("`\n");
	}
}