#pragma once

#include <iostream>

using namespace std;

using rozmiarCiagu = int;
using ciag = float *;
using operacja = float (*)(ciag, rozmiarCiagu);

ciag geometryczny = nullptr;

ciag InicjalizujCiagGeometryczny(rozmiarCiagu rozmiar, float iloraz)
{
    geometryczny = new float[rozmiar];
    geometryczny[0] = 1;
    for (int i = 1; i < rozmiar; ++i)
    {
        geometryczny[i] = iloraz * geometryczny[i - 1];
    }
    return geometryczny;
}

void Wypisz(ciag geometryczny, rozmiarCiagu rozmiar)
{
    for (int i = 0; i < rozmiar; ++i)
    {
        if (i == 0)
        {
            cout << "(" << geometryczny[i] << ", ";
        }
        else if (i == rozmiar - 1)
        {
            cout << geometryczny[i] << ")";
        }
        else
        {
            cout << geometryczny[i] << ", ";
        }
    }
    cout << endl;
}

float Suma(ciag geometryczny, rozmiarCiagu rozmiar)
{
    float suma = 0;
    for (int i = 0; i < rozmiar; ++i)
    {
        suma += geometryczny[i];
    }
    return suma;
}

float Srednia(ciag geometryczny, rozmiarCiagu rozmiar)
{
    return Suma(geometryczny, rozmiar) / rozmiar;
}

float Wykonaj(operacja op, const ciag geometryczny, rozmiarCiagu rozmiar)
{
    return op(geometryczny, rozmiar);
}

void UsunCiagi()
{
    delete[] geometryczny;
    geometryczny = nullptr; 
}
