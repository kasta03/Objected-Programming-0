#include "Polozenie.h"
#include "Operacje.h"
#include "PolozeniePoczatkowe.h"
#include "Predkosc.h"
#include "Przyspieszenie.h"
#include "Czas.h"

double Polozenie(void)
{
    double a = Przyspieszenie();
    double t = Czas();
    double v = Predkosc();
    double r0 = PolozeniePoczatkowe();

    double r = Suma(Suma(Iloczyn(0.5 * a, Kwadrat(t)), Iloczyn(v, t)), r0);
    return r;
    }