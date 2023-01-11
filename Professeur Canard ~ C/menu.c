#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "exercice.h"
#include "exercice/bonus/easter_egg.h"

void menu(void)	
{
	//Déclare les variables.
	int exec = 1;
	//Boucle tant que l'utilisateur le souhaite.
	do
	{
		//Déclare les variables.
		int choice_tp;
		//Vide la console.
		system("cls");
		//Demande à l'utilisateur de choisir un TP.
		printf("Quelle TP voulez vous executer ?\n(1-2 : TP) (0 : Return)  (999 | 666 : Secret)\n");
		scanf_s("%d", &choice_tp);

		//Switch en fonction du choix de l'utilisateur
		switch (choice_tp)
		{
			case 0:
				//Retour en arrière.
				break;
			case 1:
				//Lance la fonction du TP1.
				menu_tp1();
				break;
			case 2:
				//Lance la fonction du TP2.
				menu_tp2();
				break;
			case 666:
				//Lance la fonction du second Easter Egg.
				easter_egg_2();
				printf("\n\n\nAppuyez sur une touche pour continuer...");
				getch();
				break;
			case 999:
				//Lance la fonction du premier Easter Egg.
				easter_egg_1();
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

void menu_tp1(void)
{
	//Déclare les variables.
	int exec = 1;
	do
	{
		//Déclare les variables.
		int choice_ex;
		//Vide la console.
		system("cls");
		//Demande à l'utilisateur de choisir un exercice.
		printf("Quelle Exercice voulez vous executer ?\n(1-8 : Exercice) (0 : Return)\n");
		scanf_s("%d", &choice_ex);
		//Vide la console.
		system("cls");

		//Switch en fonction du choix de l'utilisateur
		switch (choice_ex)
		{
			case 0:
				//Retour en arrière.
				break;
			case 1:
				//Lance la fonction de l'exercice 1.
				tp1_ex1();
				break;

			case 2:
				//Lance la fonction de l'exercice 2.
				tp1_ex2();
				break;

			case 3:
				//Lance la fonction de l'exercice 3.
				tp1_ex3();
				break;

			case 4:
				//Lance la fonction de l'exercice 4.
				tp1_ex4();
				break;

			case 5:
				//Lance la fonction de l'exercice 5.
				tp1_ex5();
				break;

			case 6:
				//Lance la fonction de l'exercice 6.
				tp1_ex6();
				break;

			case 7:
				//Lance la fonction de l'exercice 7.
				tp1_ex7();
				break;

			case 8:
				//Lance la fonction de l'exercice 8.
				tp1_ex8();
				break;

			default:
				//Affiche un message d'erreur.
				printf("Choix invalide.\n");
				break;
		}
		
		//Message d'attente.
		printf("\n\n\nAppuyez sur une touche pour continuer...");
		//Pause.
		getch();
		//Vide la console.
		system("cls");
		//Demande à l'utilisateur s'il veut continuer.
		printf("Voulez vous rester sur le TP 1?\nTrue (1), False (0)\n");
		scanf_s("%d", &exec);
	} while (exec == 1);
}

void menu_tp2(void)
{
	//Déclare les variables.
	int exec = 1;
	do
	{
		//Déclare les variables.
		int choice_ex;
		//Vide la console.
		system("cls");
		//Demande à l'utilisateur de choisir un exercice.
		printf("Quelle Exercice voulez vous executer ?\n(1-8 : Exercice) (0 : Return)\n");
		scanf_s("%d", &choice_ex);
		//Vide la console.
		system("cls");

		//Switch en fonction du choix de l'utilisateur
		switch (choice_ex)
		{
		case 0:
			//Retour en arrière.
			break;
		case 1:
			//Lance la fonction de l'exercice 1.
			tp2_ex1();
			break;

		case 2:
			//Lance la fonction de l'exercice 2.
			tp2_ex2();
			break;

		case 3:
			//Lance la fonction de l'exercice 3.
			tp2_ex3();
			break;

		case 4:
			//Lance la fonction de l'exercice 4.
			tp2_ex4();
			break;

		case 5:
			//Lance la fonction de l'exercice 5.
			tp2_ex5();
			break;

		default:
			//Affiche un message d'erreur.
			printf("Choix invalide.\n");
			break;
		}
		
		//Message d'attente.
		printf("\n\n\nAppuyez sur une touche pour continuer...");
		//Pause.
		getch();
		//Vide la console.
		system("cls");
		//Demande à l'utilisateur s'il veut continuer.
		printf("Voulez vous rester sur le TP 2?\nTrue (1), False (0)\n");
		scanf_s("%d", &exec);
	} while (exec == 1);
}
