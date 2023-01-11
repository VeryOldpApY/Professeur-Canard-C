#include "calcul_surface.h"
#include <stdio.h>
#include <math.h>

void calcul_surface(void)
{
	//Initie les variables.
	int nb = 0;
	float cm = 0;

	//Demande le nombre de côtés.
	printf("Entrez le nombre de côté : ");
	scanf_s("%d", &nb);

	//Demande la longueur des côtés.
	printf("Entrez la longueur d'un côté : ");
	scanf_s("%f", &cm);
	
	//Calcul la surface et l'affiche.
	const double clc = pow(cm, 2) * nb / (4 * tan(3.14 / nb));
	printf("Le résultat est : %lf\n", clc);
}
