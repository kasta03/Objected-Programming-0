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
// * archiwum powinno zawierać katalog z zadaniem lab04/
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar
// * wszystkie funkcje w plikach *.h powinny być okomentowane wg formatu wprowadzonego 
// * na wcześniejszych zajęciach


#include <iostream>
#include "IceMachine.h"
#include "Service.h"
using namespace std;


int main(int argc, char** argv) 
{
        IceMachine MyIceMachine1;

        MyIceMachine1.SetID(1);
        MyIceMachine1.SetState(false);
        MyIceMachine1.SetCapacity(2.0);
        //MyIceMachine1.SetConsumption(0.025);
        MyIceMachine1.SetConsumption(0.01);
        MyIceMachine1.SetPowder(0.0);

        MyIceMachine1.Presentation();

        MyIceMachine1.Make(-5);
        MyIceMachine1.Make(50);
        MyIceMachine1.Start();
        MyIceMachine1.Reload(1);
        MyIceMachine1.Make(50);
        MyIceMachine1.Start();
        MyIceMachine1.Make(50);
        MyIceMachine1.Reload(5);
        MyIceMachine1.Stop();
        MyIceMachine1.Reload(-10);
        MyIceMachine1.Reload(5);
        MyIceMachine1.Start();
        MyIceMachine1.Make(25);
        MyIceMachine1.Make(10);
        MyIceMachine1.Stop();

        MyIceMachine1.Presentation();

//////////////////////////////////////

        IceMachine * pMyIceMachine1 = &MyIceMachine1;

//////////////////////////////////////

        Service IceMachineService;

        IceMachineService.Test(&MyIceMachine1, 10.0);
        MyIceMachine1.Presentation();

        IceMachineService.Test(pMyIceMachine1, 30.0);
        MyIceMachine1.Presentation();

        IceMachineService.TestCopy(MyIceMachine1, 20.0);
        MyIceMachine1.Presentation();

//////////////////////////////////////


        return 0;
}

/** Wynik dzialania programu:

### Prezentacja ###
Identyfikator maszyny do lodow wloskich: 1
Maszyna do lodow wloskich jest wylaczona
Pojemnosc maszyny do lodow wloskich wynosi 2 kilogramy/kilogramow
Srednia wydajnosc wynosi 0.01 kilogramow na 1 porcje
W maszynie do lodow wloskich jest 0 kilogramow proszku

### Robienie lodow ###
BLAD: Niepoprawna ilosc porcji

### Robienie lodow ###
BLAD: Wlacz maszyne do lodow wloskich

### Uruchomienie maszyny do lodow wloskich ###
BLAD: Brak proszku, wsyp

### Wsypywanie proszku ###
Wsypales 1 kilogram/kilogramow proszku

### Robienie lodow ###
BLAD: Wlacz maszyne do lodow wloskich

### Uruchomienie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wlaczona

### Robienie lodow ###
Zrobiles 50 porcji lodow

### Wsypywanie proszku ###
BLAD: Wylacz maszyne do lodow wloskich przed wsypaniem proszku

### Zatrzymanie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wylaczona

### Wsypywanie proszku ###
BLAD: Niepoprawna ilosc proszku do wsypania

### Wsypywanie proszku ###
Wsypales 1.5 kilogram/kilogramow proszku

### Uruchomienie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wlaczona

### Robienie lodow ###
Zrobiles 25 porcji lodow

### Robienie lodow ###
Zrobiles 10 porcji lodow

### Zatrzymanie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wylaczona

### Prezentacja ###
Identyfikator maszyny do lodow wloskich: 1
Maszyna do lodow wloskich jest wylaczona
Pojemnosc maszyny do lodow wloskich wynosi 2 kilogramy/kilogramow
Srednia wydajnosc wynosi 0.01 kilogramow na 1 porcje
W maszynie do lodow wloskich jest 1.65 kilogramow proszku

#############################################################
### Test serwisowy ###

1. Wsyp proszek do pelna:
### Wsypywanie proszku ###
Wsypales 0.35 kilogram/kilogramow proszku
2. Przebieg testowy: 10 porcji:
### Uruchomienie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wlaczona

### Robienie lodow ###
Zrobiles 10 porcji lodow

### Zatrzymanie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wylaczona

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator maszyny do lodow wloskich: 1
Maszyna do lodow wloskich jest wylaczona
Pojemnosc maszyny do lodow wloskich wynosi 2 kilogramy/kilogramow
Srednia wydajnosc wynosi 0.01 kilogramow na 1 porcje
W maszynie do lodow wloskich jest 1.9 kilogramow proszku

#############################################################
### Test serwisowy ###

1. Wsyp proszek do pelna:
### Wsypywanie proszku ###
Wsypales 0.1 kilogram/kilogramow proszku
2. Przebieg testowy: 30 porcji:
### Uruchomienie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wlaczona

### Robienie lodow ###
Zrobiles 30 porcji lodow

### Zatrzymanie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wylaczona

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator maszyny do lodow wloskich: 1
Maszyna do lodow wloskich jest wylaczona
Pojemnosc maszyny do lodow wloskich wynosi 2 kilogramy/kilogramow
Srednia wydajnosc wynosi 0.01 kilogramow na 1 porcje
W maszynie do lodow wloskich jest 1.7 kilogramow proszku

#############################################################
### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###

1. Wsyp proszek do pelna:
### Wsypywanie proszku ###
Wsypales 0.3 kilogram/kilogramow proszku
2. Przebieg testowy: 20 porcji:
### Uruchomienie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wlaczona

### Robienie lodow ###
Zrobiles 20 porcji lodow

### Zatrzymanie maszyny do lodow wloskich ###
Maszyna do lodow wloskich zostala wylaczona

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator maszyny do lodow wloskich: 1
Maszyna do lodow wloskich jest wylaczona
Pojemnosc maszyny do lodow wloskich wynosi 2 kilogramy/kilogramow
Srednia wydajnosc wynosi 0.01 kilogramow na 1 porcje
W maszynie do lodow wloskich jest 1.7 kilogramow proszku

*/