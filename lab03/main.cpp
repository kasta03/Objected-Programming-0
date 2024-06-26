// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
// Przykład polecenia 
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Pliku main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem lab03/
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar
// * wszystkie funkcje w plikach *.h powinny być okomentowane wg formatu wprowadzonego // * na wcześniejszych zajęciach
// * do alokacji i dealokacji pamięci używaj odpowiednich operatorów
// * wybranych spośród następującej listy: new, new [], delete, delete []


#include <iostream>
#include "Array.h"
using namespace std;


int main(int argc, char** argv) 
{
        int * array;
        int arraySize = 10;

        array = InitArray(arraySize);

        CreateSequence(array, arraySize);

        int newArraySize = arraySize + 1;

        array = ChangeArraySize(array, arraySize, newArraySize);

        array[arraySize] = 100;

        if( PRINT_RESULTS )     // Zmienna zdefiniowana na poziomie CMakeLists.txt
        {
                for(int i = 0; i < newArraySize; i++)
                        cout << "0 + ... + " << i << " = " << array[i] << endl;
        }

        DeleteArray(array);

        return 0;
}

/** Wynik dzialania programu:
0 + ... + 1 = 1
0 + ... + 2 = 3
0 + ... + 3 = 6
0 + ... + 4 = 10
0 + ... + 5 = 15
0 + ... + 6 = 21
0 + ... + 7 = 28
0 + ... + 8 = 36
0 + ... + 9 = 45
0 + ... + 10 = 55
*/