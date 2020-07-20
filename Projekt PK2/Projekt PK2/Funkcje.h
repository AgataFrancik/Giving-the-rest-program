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
/**Funkcja obslugujaca gre w zgadywanki. Nie jest sterowana zadnymi zmiennymi spoza tej funkcji.*/
void Gra();
/**Funkcja sprawdzajaca czy na liscie zakupow dany produkt juz nie wystepowal. Jesli wystepowal, funkcja zwroci 1, jesli nie, 0.*/
int CzyBylo(char produkt,char jaka);