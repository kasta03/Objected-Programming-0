#pragma once

#include <iostream>
#include "GOperations.h"

typedef float* ciag;
typedef unsigned int rozmiarCiagu;


//inicjalizuje ciag geometryczny
float* InicjalizujCiagGeometryczny(rozmiarCiagu rozmiar, float first , float iloraz);

//wypisuje ciag
void Wypisz(const ciag geometryczny, rozmiarCiagu rozmiar);

//usuwa zaalokowane tablice
void UsunCiagi();

