#pragma warning(suppress : 4996) 
#define _CRT_SECURE_NO_WARNINGS
#include "Funkcje.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void DodajDoDziennej(char produkt, float iloscBrakuje, int usunac)
{
	FILE* plik;
	if (usunac == 0)
	{
		if ((plik = fopen("Dzienna.txt", "a")) == NULL);
		{
			printf("Tego pliku nie da sie otworzyc");
			exit(1);
		}
		fprintf(plik, "%s", produkt);
		fprintf(plik, "%f", iloscBrakuje);
		fprintf(plik, "/n");
		fclose(plik);
	}
	else
	{
		if ((plik = fopen("Dzienna.txt", "w")) == NULL);
		{
			printf("Tego pliku nie da sie otworzyc");
			exit(1);
		}
		fprintf(plik, "%s", produkt);
		fprintf(plik, "%f", iloscBrakuje);
		fprintf(plik, "/n");
		fclose(plik);
	}
}
void DodajDoMiesiecznej(char produkt, float iloscBrakuje, int usunac)
{
	FILE* plik;
	if (!usunac)
	{
		plik = fopen("Miesieczna.txt", "a");
		if ((plik = fopen("Miesieczna.txt", "a")) == NULL);
		{
			printf("Tego pliku nie da sie otworzyc");
			exit(1);
		}
		fprintf(plik, "%s", &produkt);
		fprintf(plik, "%f", iloscBrakuje);
		fprintf(plik, "/n");
		fclose(plik);
	}
	else
	{
		plik = fopen("Miesieczna.txt", "w");
		if ((plik = fopen("Miesieczna.txt", "w")) == NULL);
		{
			printf("Tego pliku nie da sie otworzyc");
			exit(1);
		}
		fprintf(plik, "%s", produkt);
		fprintf(plik, "%f", iloscBrakuje);
		fprintf(plik, "/n");
		fclose(plik);
	}
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