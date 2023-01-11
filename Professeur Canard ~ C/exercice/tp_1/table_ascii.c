#include <stdio.h>
#include "table_ascii.h"

void table_ascii(void)
{
	//Boucle entre 33 et 126.
	for (int i = 33; i < 127; i++)
	{
		//Sépare l'affichage ASCII en fonction des dizaines.
		if (i % 10)
		{
			//Affiche la valeur Ascii correspondant à i.
			printf("[%d, %c] ", i, i);	
		}
		else
		{
			//Affiche la valeur Ascii correspondant à i mais avec un retour à la ligne.
			printf("\n[%d, %c] ", i, i);
		}
	}
}
