#pragma warning(suppress : 4996) 
#define _CRT_SECURE_NO_WARNINGS
#include "Funkcje.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int CzyBylo(char produkt, char jaka)
{
	FILE* plik = fopen(jaka, "r");
	int n;
	char s[20];
	if (plik == NULL)   
	{
		printf("Pliku nie mozna otworzyc");
		exit(1);   
	}
	while (fscanf(plik, "%s%d", s, &n) != EOF)
	{    
		if (strcmp(s, produkt) == 0)
		{
			return 1;
		}
	}
	return 0;
	fclose(plik);
}

void Gra()
{
	printf("Zagrajmy w zgadywanki. Ja mam zgadywac, czy Ty? ");
	char JaTy;
	scanf("%s", &JaTy);
	if (JaTy == 'Ty')
	{
		int odpowiedz = 50, prawda = 0;
		int polowa = 50;
		printf("Grajmy wiec!!! Pomysl liczbe od 1 do 100.");

		while (!prawda)
		{
			printf("Czy to jest ");
			printf("%d", odpowiedz);
			printf("?");
			scanf("%d", prawda);
			if (prawda)
			{
				printf("Twoja liczba to ");
				printf("%d", odpowiedz);
				break;
			}
			else
			{
				printf("Czy ta liczba jest wieksza od ");
				printf("%d", odpowiedz);

				odpowiedz /= 2;
				odpowiedz = odpowiedz + polowa;
				polowa / 2;
			}
		}
	}
	else
	{
		printf("Zgadnij jaka liczbe pomyslalem. Jest w zakresie od 1 do 100. ");
		srand(time(NULL));
		int liczba = rand() % 100 + 1;
		int proba, licznik = 0;
		int dzialaj = 1;
		while (dzialaj)
		{
			printf("Zgaduj ");
			scanf("%d", &proba);
			if (proba == liczba)
			{
				printf("Tak! To ta liczba! Brawo! Zgadles w ");
				printf("%d", licznik);
				printf(" probie!");
				break;
			}
			if (proba < liczba)
			{
				printf("Nie. Ta liczba jest wieksza.");
				licznik++;
			}
			if (proba > liczba)
			{
				printf("Nie. Ta liczba jest mniejsza.");
				licznik++;
			}
		}
	}
}