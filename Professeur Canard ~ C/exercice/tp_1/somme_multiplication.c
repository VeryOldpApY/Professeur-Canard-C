#include <stdio.h>
#include "somme_multiplication.h"

void somme_multiplication(void)
{
	//Initie les variables.
	int i = 0;

	//Demande à l'utilisateur de saisir un nombre.
	printf("Indiquer le nombre que vous souhaitez : ");
	scanf_s("%d", &i);

	//Lance la fonction Somme.
	somme(i);
	printf("\n");
	//Lance la fonction Multiplicateur.
	multiplication(i);
	printf("\n");
}

void somme(const int i)
{
	//Initialise les variables.
	int rs = 0;

	//Boucle qui additionne la variable rs.
	for (int j = 1; j <= i; j++)
	{
		rs += j;
	}

	//Affiche le résultat.
	printf("%d = ", rs);
	for (int j = 1; j < i; j++)
	{
		printf("%d + ", j);
	}
	printf("%d", i);
}

void multiplication(const int i)
{
	//Initie les variables.
	int rs = 1;

	//Boucle qui multiplie la variable rs.
	for (int j = 1; j <= i; j++)
	{
		rs = rs * j;
	}

	//Affiche le résultat.
	printf("%d! = ", i);
	printf("%d = ", rs);
	for (int j = 1; j < i; j++)
	{
		printf("%d x ", j);
	}
	printf("%d", i);
}