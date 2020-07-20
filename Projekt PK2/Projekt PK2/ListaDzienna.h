#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
/**Funkcja dodajaca do listy dziennej zakupy i ich ilosc. Funkcja moze usuwac stara liste, badz dopisywac na nia nowe zakupy.*/
void DodajDoDziennej(char produkt, float iloscBrakuje, int usunac);