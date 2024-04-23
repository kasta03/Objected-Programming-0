#pragma once

#include<iostream>

typedef float* ciag;
typedef unsigned int rozmiarCiagu;
typedef float (*operacja)(const ciag, rozmiarCiagu);


extern ciag geometryczny;

//suma ciagu
float Suma(const ciag geometryczny, rozmiarCiagu);

//srednia ciagu
float Srednia(const ciag geometryczny, rozmiarCiagu rozmiar);

//wykonuje oblicznia
float Wykonaj(operacja op, const ciag geometryczny, rozmiarCiagu);

