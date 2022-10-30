#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <Windows.h>
#include "easter_egg.h"

void EasterEgg_1()
{
	SetConsoleOutputCP(CP_UTF8);
	FILE* fptr = fopen("canard.txt", "r");
	if (fptr != NULL)
	{
		PrintImage(fptr);
		fclose(fptr);
	}
	else
	{
		printf("Error File");
	}
}

void EasterEgg_2()
{
	SetConsoleOutputCP(CP_UTF8);
	FILE* fptr = fopen("pApY.txt", "r");
	if (fptr != NULL)
	{
		PrintImage(fptr);
		fclose(fptr);
	}
	else
	{
		printf("Error File");
	}
}

void EasterEgg_3()
{
	SetConsoleOutputCP(CP_UTF8);
	FILE* fptr = fopen("Error.txt", "r");
	if (fptr != NULL)
	{
		PrintImage(fptr);
		fclose(fptr);
	}
	else
	{
		printf("Error File");
	}
}

void PrintImage(FILE* fptr)
{
	char read_string[128];

	while (fgets(read_string, sizeof(read_string), fptr) != NULL)
		printf("%s", read_string);
}
