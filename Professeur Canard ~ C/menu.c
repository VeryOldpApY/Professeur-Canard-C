#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "exercice.h"
#include "easter_egg.h"

void Menu()	
{
	int exec = 1;
	do
	{
		int choiceTP;
		system("cls");
		printf("Quelle TP voulez vous executer ?\n(1-2 : TP) (0 : Return)  (999 | 666 : Secret)\n");
		scanf_s("%d", &choiceTP);

		switch (choiceTP)
		{
			case 0:
				break;
			case 1:
				MenuTP1();
				break;
			case 2:
				MenuTP2();
				break;
			case 666:
				EasterEgg_2();
				printf("\n\n\nAppuyez sur une touche pour continuer...");
				getch();
				break;
			case 999:
				EasterEgg_1();
				printf("\n\n\nAppuyez sur une touche pour continuer...");
				getch();
				break;
			default:
				printf("Choix invalide.\n");
				printf("\n\n\nAppuyez sur une touche pour continuer...");
				getch();
				break;
		}
		system("cls");
		printf("Voulez vous continuez ?\nTrue (1), False (0)\n");
		scanf_s("%d", &exec);
	} while (exec == 1);
}

void MenuTP1()
{
	int exec = 1;
	do
	{
		int choiceEx;
		system("cls");
		printf("Quelle Exercice voulez vous executer ?\n(1-8 : Exercice) (0 : Return)\n");
		scanf_s("%d", &choiceEx);
		system("cls");

		switch (choiceEx)
		{
		case 0:
			break;
		case 1:
			TP1_Ex1();
			break;

		case 2:
			TP1_Ex2();
			break;

		case 3:
			TP1_Ex3();
			break;

		case 4:
			TP1_Ex4();
			break;

		case 5:
			TP1_Ex5();
			break;

		case 6:
			TP1_Ex6();
			break;

		case 7:
			TP1_Ex7();
			break;

		case 8:
			TP1_Ex8();
			break;

		default:
			printf("Choix invalide.\n");
			break;
		}

		printf("\n\n\nAppuyez sur une touche pour continuer...");
		getch()	;
		system("cls");
		printf("Voulez vous rester sur le TP 1?\nTrue (1), False (0)\n");
		scanf_s("%d", &exec);
	} while (exec == 1);
}

void MenuTP2()
{
}
