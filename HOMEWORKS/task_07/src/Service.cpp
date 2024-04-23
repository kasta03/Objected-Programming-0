#include "Service.h"
#include <iostream>

void Service::Test(IceMachine* machine, double powderAmount) {
    std::cout << "### Test serwisowy ###\n";
    std::cout << "1. Wsyp proszek do pełna:\n";
    machine->Reload(machine->GetCapacity() - machine->GetPowder());
    std::cout << "2. Przebieg testowy: 10 porcji:\n";
    machine->Start();
    machine->Make(10);
    machine->Stop();
    std::cout << "### Koniec testu serwisowego ###\n";
}

void Service::TestCopy(IceMachine machine, double powderAmount) {
    std::cout << "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###\n";
    std::cout << "1. Wsyp proszek do pełna:\n";
    machine.Reload(machine.GetCapacity() - machine.GetPowder());
    std::cout << "2. Przebieg testowy: 20 porcji:\n";
    machine.Start();
    machine.Make(20);
    machine.Stop();
    std::cout << "### Koniec testu serwisowego ###\n";
}
