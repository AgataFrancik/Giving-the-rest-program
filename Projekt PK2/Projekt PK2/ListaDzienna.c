#pragma warning(suppress : 4996) 
#define _CRT_SECURE_NO_WARNINGS
#include "ListaDzienna.h"
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