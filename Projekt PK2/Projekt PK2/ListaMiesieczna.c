#pragma warning(suppress : 4996) 
#define _CRT_SECURE_NO_WARNINGS
#include "ListaMiesieczna.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

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