#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
/** Struktura z zakupami. Posiada nazwe produktu, jego brakujaca ilosc i wskaznik na nastepna.*/
struct zakupy
{
	char nazwa;
	float ilosc;
	struct zakupy* pNext;
};
/**Funkcja dodajaca do listy dziennej zakupy i ich ilosc. Funkcja moze usuwac stara liste, badz dopisywac na nia nowe zakupy.*/
void DodajDoDziennej(char produkt, float iloscBrakuje, int usunac);
/**Funkcja dodajaca do listy miesiecznej zakupy i ich ilosc. Funkcja moze usuwac stara liste, badz dopisywac na nia nowe zakupy.*/
void DodajDoMiesiecznej(char produkt, float iloscBrakuje, int usunac);
/**Funkcja obslugujaca gre w zgadywanki. Nie jest sterowana zadnymi zmiennymi spoza tej funkcji.*/
void Gra();