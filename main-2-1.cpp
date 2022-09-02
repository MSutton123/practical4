#include <iostream>
#include "Wagon.h"
#include "Capybara.h"

using namespace std;

int main() {
    Capybara *a, *b, *c, *d, *e;

    a = new Capybara();
    b = new Capybara();
    c = new Capybara();
    d = new Capybara();
    e = new Capybara();

    a -> setName("Abby");
    b -> setName("Byron");
    c -> setName("Cade");
    d -> setName("Declan");
    e -> setName("Ebony");

    a -> setAge(11);
    b -> setAge(12);
    c -> setAge(13);
    d -> setAge(14);
    e -> setAge(15);

    Wagon *car;

    car = new Wagon();

    car->addCapybara(*a);
    car->addCapybara(*b);
    car->addCapybara(*c);
    car->addCapybara(*d);
    car->addCapybara(*e);

    car->printCapybaras();

}