#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <Windows.h>
#include "easter_egg.h"

void EasterEgg_1()
{
	//Met la console en UTF-8.
	SetConsoleOutputCP(CP_UTF8);
	//Ouvre le fichier.
	FILE* fptr = fopen("canard.txt", "r");
	//Vérifie si le fichier existe.
	if (fptr != NULL)
	{
		//Appel de la fonction d'affichage.
		PrintImage(fptr);
		//Ferme le fichier.
		fclose(fptr);
	}
	else
	{
		//Affiche un message d'erreur.
		printf("Error File");
	}
}

void EasterEgg_2()
{
	//Met la console en UTF-8.
	SetConsoleOutputCP(CP_UTF8);
	//Ouvre le fichier.
	FILE* fptr = fopen("pApY.txt", "r");
	//Vérifie si le fichier existe.
	if (fptr != NULL)
	{
		//Appel de la fonction d'affichage.
		PrintImage(fptr);
		//Ferme le fichier.
		fclose(fptr);
	}
	else
	{
		//Affiche un message d'erreur.
		printf("Error File");
	}
}

void EasterEgg_3()
{
	//Met la console en UTF-8.
	SetConsoleOutputCP(CP_UTF8);
	//Ouvre le fichier.
	FILE* fptr = fopen("Error.txt", "r");
	//Vérifie si le fichier existe.
	if (fptr != NULL)
	{
		//Appel de la fonction d'affichage.
		PrintImage(fptr);
		//Ferme le fichier.
		fclose(fptr);
	}
	else
	{
		//Affiche un message d'erreur.
		printf("Error File");
	}
}

void PrintImage(FILE* fptr)
{
	//Déclaration des variables.
	char read_string[128];

	//Lit le fichier ligne par ligne.
	while (fgets(read_string, sizeof(read_string), fptr) != NULL)
	{
		//Affiche la ligne.
		printf("%s", read_string);
	}
}
