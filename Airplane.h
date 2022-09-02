#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>
#include "Person.h"

// Class definition for an Airplane
class Airplane
{
public:
        Person pilot;
        Person pilotco;
        std::string callsign;


        // a pilot and copilot must be provided when creating an airplane
        Airplane(std::string callsign, Person thePilot, Person theCoPilot);
        void setPilot(Person JKLthePilot);      // change the pilot
        Person getPilot();
        void setCoPilot(Person JKLtheCoPilot);  // change the co-pilot
        Person getCoPilot();
        void printDetails();                 // print the callsign, a new line, the pilot name,
                                     // a new line, the co-pilot name and a final newline.
        
};
#endif //AIRPLANE_H