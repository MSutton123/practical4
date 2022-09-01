#include <iostream>
#include "Capybara.h"

using namespace std;

int main() {
    Capybara *one, *two, *three, *four;

    // initialising
    one = new Capybara();
    two = new Capybara();
    three = new Capybara();
    four = new Capybara();

    // setting name
    one->setName("ONE");
    two->setName("TWO");
    three->setName("THREE");
    four->setName("FOUR");

    // setting age
    one->setAge(1);
    two->setAge(2);
    three->setAge(3);
    four->setAge(4);

    // outputting
    std::cout << "one" << " " << one->getName() << " " << one->getAge() << std::endl;
    std::cout << "two" << " " << two->getName() << " " << two->getAge() << std::endl;
    std::cout << "three" << " " << three->getName() << " " << three->getAge() << std::endl;
    std::cout << "four" << " " << four->getName() << " " << four->getAge() << std::endl;
}