#include <iostream>
#include "Airplane.h"
#include "Person.h"

using namespace std;

int main() {
    
    Person *a, *b, *c;

    a = new Person(100,"Amy");
    b = new Person(200,"Bill");
    c = new Person(300,"Clark");

    Airplane *vroom;

    vroom = new Airplane("sign",*a,*b);

    vroom->setPilot(*c);

    vroom->setCoPilot(*a);

    vroom->printDetails();

}