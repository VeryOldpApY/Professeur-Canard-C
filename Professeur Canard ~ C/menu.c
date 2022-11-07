#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "exercice.h"
#include "easter_egg.h"

void Menu()	
{
	//Déclare les variables.
	int exec = 1;
	//Boucle tant que l'utilisateur le souhaite.
	do
	{
		//Déclare les variables.
		int choiceTP;
		//Vide la console.
		system("cls");
		//Demande à l'utilisateur de choisir un TP.
		printf("Quelle TP voulez vous executer ?\n(1-2 : TP) (0 : Return)  (999 | 666 : Secret)\n");
		scanf_s("%d", &choiceTP);

		//Switch en fonction du choix de l'utilisateur
		switch (choiceTP)
		{
			case 0:
				//Retour en arrière.
				break;
			case 1:
				//Lance la fonction du TP1.
				MenuTP1();
				break;
			case 2:
				//Lance la fonction du TP2.
				MenuTP2();
				break;
			case 666:
				//Lance la fonction du second Easter Egg.
				EasterEgg_2();
				printf("\n\n\nAppuyez sur une touche pour continuer...");
				getch();
				break;
			case 999:
				//Lance la fonction du premier Easter Egg.
				EasterEgg_1();
				printf("\n\n\nAppuyez sur une touche pour continuer...");
				getch();
				break;
			default:
				//Affiche un message d'erreur.
				printf("Choix invalide.\n");
				printf("\n\n\nAppuyez sur une touche pour continuer...");
				getch();
				break;
		}
		//Vide la console.
		system("cls");
		//Demande à l'utilisateur s'il veut continuer.
		printf("Voulez vous continuez ?\nTrue (1), False (0)\n");
		scanf_s("%d", &exec);
	} while (exec == 1);
}

void MenuTP1()
{
	//Déclare les variables.
	int exec = 1;
	do
	{
		//Déclare les variables.
		int choiceEx;
		//Vide la console.
		system("cls");
		//Demande à l'utilisateur de choisir un exercice.
		printf("Quelle Exercice voulez vous executer ?\n(1-8 : Exercice) (0 : Return)\n");
		scanf_s("%d", &choiceEx);
		//Vide la console.
		system("cls");

		//Switch en fonction du choix de l'utilisateur
		switch (choiceEx)
		{
			case 0:
				//Retour en arrière.
				break;
			case 1:
				//Lance la fonction de l'exercice 1.
				TP1_Ex1();
				break;

			case 2:
				//Lance la fonction de l'exercice 2.
				TP1_Ex2();
				break;

			case 3:
				//Lance la fonction de l'exercice 3.
				TP1_Ex3();
				break;

			case 4:
				//Lance la fonction de l'exercice 4.
				TP1_Ex4();
				break;

			case 5:
				//Lance la fonction de l'exercice 5.
				TP1_Ex5();
				break;

			case 6:
				//Lance la fonction de l'exercice 6.
				TP1_Ex6();
				break;

			case 7:
				//Lance la fonction de l'exercice 7.
				TP1_Ex7();
				break;

			case 8:
				//Lance la fonction de l'exercice 8.
				TP1_Ex8();
				break;

			default:
				//Affiche un message d'erreur.
				printf("Choix invalide.\n");
				break;
		}

		printf("\n\n\nAppuyez sur une touche pour continuer...");
		getch();
		//Vide la console.
		system("cls");
		//Demande à l'utilisateur s'il veut continuer.
		printf("Voulez vous rester sur le TP 1?\nTrue (1), False (0)\n");
		scanf_s("%d", &exec);
	} while (exec == 1);
}

void MenuTP2()
{
}
