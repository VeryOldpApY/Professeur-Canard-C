#include <stdio.h>
#include "le_plus_grand.h"

void LePlusGrand()
{
	//Déclarations de variables.
	int tab[5] = {0, 0, 0, 0, 0};
	int big[2] = {0, 0};
	
	//Boucle sur la grandeur du tableau.
	for (int i = 0; i < 5; i++)
	{
		//Demande à l'utilisateur de rentrer un nombre.
		printf("Entrez le nombre dans n°%d que vous souhaitez stockez : ", i+1);
		scanf_s("%d", &tab[i]);
		printf("\n");

		//Vérifie si le nombre est plus grand que le précédent.
		if (tab[i] > big[1])
		{
			//Stock le nombre le plus grand et son index.
			big[0] = i;
			big[1] = tab[i];
		}
	}

	//Affiche le nombre le plus grand et son index.
	printf("Le nombre le plus grand se trouve à l'index : %d et contenais : %d\n", big[0]+1, big[1]);s
}
