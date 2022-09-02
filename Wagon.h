#ifndef WAGON_H
#define WAGON_H

#include <string>
#include "Capybara.h"

using namespace std;

// Class definition for a Wagon
class Wagon
{
public:
        int size = 0;
        Capybara *seats = new Capybara[size];
        int i = 0;

        Wagon();                               // create an empty wagonobject
        bool addCapybara(Capybara newCapy);    // adds a Capybara to the wagon, returns false if full
        void emptyWagon();                     // remove all Capybaras from the wagon
        void printCapybaras();                 // print the name, a space, the age, then a new line
                                                // for each capybara in the order they were added

};
#endif //WAGON_H  