#include <stdio.h>
#include "le_plus_grand.h"

void LePlusGrand()
{
	int tab[5] = {0, 0, 0, 0, 0};
	int big[2] = {0, 0};
	
	for (int i = 0; i < 5; i++)
	{
		printf("Entrez le nombre dans n°%d que vous souhaitez stockez : ", i+1);
		scanf_s("%d", &tab[i]);
		printf("\n");

		if (tab[i] > big[1])
		{
			big[0] = i;
			big[1] = tab[i];
		}
	}

	printf("Le nombre le plus grand se trouve à l'index : %d et contenais : %d\n", big[0]+1, big[1]);

}
