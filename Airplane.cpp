#include <iostream>
#include <string>
#include "Airplane.h"
#include "Person.h"

using namespace std;

// a pilot and copilot must be provided when creating an airplane

Airplane::Airplane(std::string callsign, Person thePilot, Person theCoPilot) {
    callsign = callsign;
    pilot = thePilot;
    pilotco = theCoPilot;
}

void Airplane::setPilot(Person JKLthePilot) {
    pilot = JKLthePilot;
    return;
}

Person Airplane::getPilot() {
    return pilot;
}

void Airplane::setCoPilot(Person JKLtheCoPilot) {
    pilotco = JKLtheCoPilot;
    return;
}

Person Airplane::getCoPilot() {
    return pilotco;
}

void Airplane::printDetails() {
    std::cout << callsign << std::endl << pilot.getName() << std::endl << pilotco.getName();
}