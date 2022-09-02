#include <iostream>
#include <string>
#include "Wagon.h"
#include "Capybara.h"

using namespace std;

Wagon::Wagon() {
    size = 0;
    seats = new Capybara[4];
}

bool Wagon::addCapybara(Capybara newCapy) {
    
    if (size < 4){
        seats[size] = newCapy;
        size++;
        return true;
    }
    else {
        return false;
    }
    size++;
}

void Wagon::emptyWagon() {
    size = 0;
}

void Wagon::printCapybaras() {
    for (int w = 0; w < 4; w++) {
        std::cout << seats[w].getName();
        std::cout << " ";
        std::cout << seats[w].getAge();
        std::cout << std::endl;
    }
}