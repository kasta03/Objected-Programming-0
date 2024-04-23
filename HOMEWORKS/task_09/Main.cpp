// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal sie,
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
//
// Prosze napisac klasę MapPoint, ktora reprezentuje punkt na
// mapie skladajacy sie z nazwy, dlugosci (longitude) i szerokosci
// (latitude) geograficznej (bez oznaczania polkol). 
// Klasa posiada odpowiedni interfejs, wykorzystany w funkcji main()
//
// Arytmetyka dla metody a.Shift(xx,yy):
// a.x += xx
// a.y += yy 
// Arytmetyka dla metody a.Distance(b)
// diff_x = a.x - b.x
// diff_y = a.y - b.y
// distance = sqrt(diff_x*diff_x+diff_y*diff_y)
// Metoda a.Farthest(b,c) zwraca punkt który znajduje się w większej odległości od a
//
// Pliku Main.cpp, nie wolno modyfikowac.
// Ostateczny program powinien byc przyjazny dla programisty 
// (miec czytelny i dobrze napisany kod, dokumentacja). 
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek, ani zadnych innych materialow 
// (w tym własnych wczesniej przygotowanych plikow).
//
// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz wlasciciela nie ma praw dostepu.


#include "MapPoint.h"

int main() {
  const double longitude = 19.938;
  const double latitude = 50.061;
  MapPoint krk, nyc, irkutsk;
  krk.SetName("Krakow");
  krk.SetCoordinates(latitude,longitude);
  krk.Print();
  nyc.SetInfo("NYC",krk);
  nyc.Shift(40.713-latitude,-74.006-longitude).Print();
  std::cout<< "Distance NYC-KRK: "<<nyc.Distance(krk)<<std::endl;
  irkutsk.SetInfo("Irkutsk",52.283, 104.283);
  nyc.Farthest(krk,irkutsk).Print();

}
/** Wynik dzialania programu:
brachwal@vbox:[build]$ ./Map 
Position of Krakow:: Latitude: 50.061, Longitude: 19.938
Position of NYC:: Latitude: 40.713, Longitude: -74.006
Distance NYC-KRK: 94.4079
Position of Irkutsk:: Latitude: 52.283, Longitude: 104.28
*/
