#include "IceMachine.h"
#include <iostream>

IceMachine::IceMachine() : ID(0), state(false), capacity(0.0), consumption(0.0), powder(0.0) {}

void IceMachine::SetID(int id) {
    ID = id;
}

void IceMachine::SetState(bool st) {
    state = st;
}

void IceMachine::SetCapacity(double cap) {
    capacity = cap;
}

void IceMachine::SetConsumption(double cons) {
    consumption = cons;
}

void IceMachine::SetPowder(double powd) {
    powder = powd;
}

void IceMachine::Presentation() const {
    std::cout << "### Prezentacja ###\n";
    std::cout << "Identyfikator maszyny do lodow wloskich: " << ID << "\n";
    std::cout << "Maszyna do lodow wloskich jest " << (state ? "wlaczona" : "wylaczona") << "\n";
    std::cout << "Pojemnosc maszyny do lodow wloskich wynosi " << capacity << " kilogramy/kilogramow\n";
    std::cout << "Srednia wydajnosc wynosi " << consumption << " kilogramow na 1 porcje\n";
    std::cout << "W maszynie do lodow wloskich jest " << powder << " kilogramow proszku\n";
}

void IceMachine::Make(int portions) {
    std::cout << "### Robienie lodow ###\n";
    if (state) {
        if (portions <= 0) {
            std::cout << "BLAD: Niepoprawna ilosc porcji\n";
        } else {
            std::cout << "Zrobiles " << (consumption * portions) << " porcji lodow\n";
            powder -= consumption * portions;
        }
    } else {
        std::cout << "BLAD: Wlacz maszyne do lodow wloskich\n";
    }
}

void IceMachine::Start() {
    std::cout << "### Uruchomienie maszyny do lodow wloskich ###\n";
    if (!state) {
        if (powder > 0) {
            state = true;
            std::cout << "Maszyna do lodow wloskich zostala wlaczona\n";
        } else {
            std::cout << "BLAD: Brak proszku, wsyp\n";
        }
    } else {
        std::cout << "BLAD: Maszyna do lodow wloskich juz jest wlaczona\n";
    }
}

void IceMachine::Stop() {
    std::cout << "### Zatrzymanie maszyny do lodow wloskich ###\n";
    if (state) {
        state = false;
        std::cout << "Maszyna do lodow wloskich zostala wylaczona\n";
    } else {
        std::cout << "BLAD: Maszyna do lodow wloskich juz jest wylaczona\n";
    }
}

void IceMachine::Reload(double amount) {
    std::cout << "### Wsypywanie proszku ###\n";
    if (!state) {
        if (amount > 0) {
            powder += amount;
            std::cout << "Wsypales " << amount << " kilogram/kilogramow proszku\n";
        } else {
            std::cout << "BLAD: Niepoprawna ilosc proszku do wsypania\n";
        }
    } else {
        std::cout << "BLAD: Wylacz maszyne do lodow wloskich przed wsypaniem proszku\n";
    }
}

// ...
double IceMachine::GetCapacity() const {
    return capacity;
}

double IceMachine::GetPowder() const {
    return powder;
}
// ...
