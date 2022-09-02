#include <iostream>
#include <string>
#include "Airplane.h"
#include "Person.h"

using namespace std;

// a pilot and copilot must be provided when creating an airplane

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot) {
    call = callsign;
    pilot = thePilot;
    pilotco = theCoPilot;
}

void Airplane::setPilot(Person thePilot) {
    pilot = thePilot;
    return;
}

Person Airplane::getPilot() {
    return pilot;
}

void Airplane::setCoPilot(Person theCoPilot) {
    pilotco = theCoPilot;
    return;
}

Person Airplane::getCoPilot() {
    return pilotco;
}

void printDetails() {
    std::cout << call << std::endl << pilot.getPilot() << std::endl << pilotco.getCoPilot();
}