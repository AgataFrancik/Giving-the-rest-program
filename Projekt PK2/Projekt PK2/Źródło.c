#pragma warning(suppress : 4996) 
#define _CRT_SECURE_NO_WARNINGS
#include "Funkcje.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
	int wybor=0,waga=0;
	int usunac = 0;
	float iloscZostalo, iloscPowinno, iloscBrakuje;
	char produkt;
	char* tab;
	tab=malloc(5 * sizeof(*tab));
	tab = "Witamy w organizerze zakupow\n";
	puts(tab);
	printf("Co zamierzasz zrobic?\n");
	printf(" 1.Zrobic nowa liste zakupow na jutro\n 2. Zrobic nowa liste zakupow na miesiac\n 3.Dodac do poprzedniej listy zakupow artykuly\n 4.Nic. Pograc\n");
	scanf("%d", &wybor);
	switch (wybor)
	{
		case 1:
			usunac = 1;
			printf("Podaj nazwe produktu \n");
			scanf("%s", &produkt);
			if (isdigit(produkt) == 1)
			{
				char napis = "Ilosc musisz podac literami.";
				puts(napis);
				break;
			}
			printf("Ile ci zostalo tego produktu?\n");
			scanf("%f", &iloscZostalo);
			printf("Ile powinno byc produktu?\n");
			scanf("%f", &iloscPowinno);
			iloscBrakuje = iloscPowinno - iloscZostalo;
			if (iloscBrakuje < 0)
			{
				printf("Masz wiecej niz musisz miec.");
				break;
			}
			//if (isdigit(iloscBrakuje) == 0)
			//{
				//puts("Ilosc musisz podac numerycznie.");
				//break;
			//}
			printf(" Jaka jest waznosc tego produktu?\n 1-Na jutro\n 2-Na miesiac\n");
			scanf("%d", &waga);
			if (waga == 2)
			{
				printf("Chciales liste na jutro a podajesz produkt na liste miesieczna.");
				break;
			}
			DodajDoDziennej(produkt, iloscBrakuje, usunac);
		case 2:
			usunac = 1;
			printf("Podaj nazwe produktu \n");
			scanf("%s", &produkt);
			printf("Ile ci zostalo tego produktu?\n");
			scanf("%f", &iloscZostalo);
			printf("Ile powinno byc produktu?\n");
			scanf("%f", &iloscPowinno);
			iloscBrakuje = iloscPowinno - iloscZostalo;
			if (iloscBrakuje < 0)
			{
				printf("Masz wiecej niz musisz.");
				break;
			}
			if (isdigit(iloscBrakuje) == 0)
			{
				char napis = "Ilosc musisz podac numerycznie.";
				puts(napis);
				break;
			}
			printf(" Jaka jest waznosc tego produktu?\n 1-Na jutro\n 2-Na miesiac\n");
			scanf("%d", &waga);
			if (waga == 1)
			{
				printf("Chciales liste na miesiac a podajesz produkt na liste jutrzejsza.");
				break;
			}
			DodajDoMiesiecznej(produkt, iloscBrakuje,usunac);
		case 3:
			printf("Podaj nazwe produktu \n");
			scanf("%s", &produkt);
			printf("Ile ci zostalo tego produktu?\n");
			scanf("%f", &iloscZostalo);
			printf("Ile powinno byc produktu?\n");
			scanf("%f", &iloscPowinno);
			printf(" Jaka jest waznosc tego produktu?\n 1-Na jutro\n 2-Na miesiac\n");
			scanf("%d", &waga);
			iloscBrakuje = iloscPowinno - iloscZostalo;
			if (waga == 1)
			{
				DodajDoDziennej(produkt, iloscBrakuje, usunac);
			}
			else
			{
				DodajDoMiesiecznej(produkt, iloscBrakuje, usunac);
			}
		case 4:
			printf("Dobrze wiec! Zagrajmy!!!");
			Gra();
	}
	free(tab);
	return 0;
}