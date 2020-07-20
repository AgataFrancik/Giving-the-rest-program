#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
/**Funkcja dodajaca do listy miesiecznej zakupy i ich ilosc. Funkcja moze usuwac stara liste, badz dopisywac na nia nowe zakupy.*/
void DodajDoMiesiecznej(char produkt, float iloscBrakuje, int usunac);
