#include "GOperations.h"

using namespace std;

float Suma(const ciag geometryczny, rozmiarCiagu rozmiar) {
    float suma = 0.0;
    for (rozmiarCiagu i = 0; i < rozmiar; ++i) {
        suma += geometryczny[i];
    }
    return suma;
}

float Srednia(const ciag geometryczny, rozmiarCiagu rozmiar) {
    float suma = Suma(geometryczny, rozmiar);
    return suma / rozmiar;
}

float Wykonaj(operacja op, const ciag geometryczny, rozmiarCiagu rozmiar) {
    return op(geometryczny, rozmiar);
}
