#include "calcul_surface.h"
#include <stdio.h>
#include <math.h>

void CalculSurface()
{
	//Initie les variables.
	int nb = 0;
	float cm = 0.0;

	//Demande le nombre de c�t�s.
	printf("Entrez le nombre de cot� : ");
	scanf_s("%d", &nb);

	//Demande la longueur des c�t�s.
	printf("Entrez la longueur d'un cot� : ");
	scanf_s("%f", &cm);
	
	//Calcul la surface et l'affiche.
	double clc = (nb * pow(cm, 2)) / (4 * tan(3.14 / nb));
	printf("Le r�sultat est : %lf\n", clc);
}
