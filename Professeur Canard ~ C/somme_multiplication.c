#include <stdio.h>
#include "somme_multiplication.h"

void SommeMultiplication()
{
	//Initie les variables.
	int i = 0;

	//Demande à l'utilisateur de saisir un nombre.
	printf("Indiquer le nombre que vous souhaitez : ");
	scanf_s("%d", &i);

	//Lance la fonction Somme.
	Somme(i);
	printf("\n");
	//Lance la fonction Multiplicateur.
	Multiplication(i);
	printf("\n");
}

void Somme(int i)
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

void Multiplication(int i)
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
