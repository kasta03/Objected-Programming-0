#include "GSeries.h"

using namespace std;

ciag geometryczny = nullptr;

float* InicjalizujCiagGeometryczny(rozmiarCiagu rozmiar, float first , float iloraz) {
    // if (geometryczny != nullptr)         
    // {
    //     delete[] geometryczny; //<-----[BUG] (w sensie to powinno byc, bo bez tego sa 3 wycieki)
    // }

    geometryczny = new float[rozmiar];
    geometryczny[0] = first;

    for (rozmiarCiagu i = 1; i < rozmiar; ++i) {
        // geometryczny[i] = geometryczny[i - 1] / iloraz;  //<---- [BUG] (troche na sile :( )
        geometryczny[i] = geometryczny[i - 1] * iloraz;
    }
    return geometryczny;
}

void Wypisz(const ciag geometryczny, rozmiarCiagu rozmiar) {
    std::cout << "(";
    for (rozmiarCiagu i = 0; i < rozmiar; ++i) {
        std::cout << geometryczny[i];
        if (i < rozmiar - 1) {
            std::cout << ", ";
        }
    }
    std::cout << ")\n";
}

void UsunCiagi()
{
    //delete[] geometryczny; <----- [BUG] (to powinno byc, bo inaczej wycieki)
    //geometryczny = nullptr; <----- [BUG] (powinno byc bo inaczej ---->   ==16114==    still reachable: 16 bytes in 1 blocks)
}