  #include <iostream>
#include "Person.h"

using namespace std;

int main() {
    Person *amy, *bill, *clark, *danielle;

    // initialising
    amy = new Person(29,"employee 1");
    bill = new Person(2,"employee 2");
    danielle = new Person(3,"employee 9");
    clark = new Person(1,"fired");

    // setting name
    amy->setName("Amelia");
    bill->setName("William");
    clark->setName("Clarkson");
    danielle->setName("Daniel");

    // setting age
    amy->setSalary(1000);
    bill->setSalary(2000);
    clark->setSalary(3000);
    danielle->setSalary(4000);

    // outputting
    std::cout << "amy" << " " << amy->getName() << " " << amy->getSalary() << std::endl;
    std::cout << "bill" << " " << bill->getName() << " " << bill->getSalary() << std::endl;
    std::cout << "clark" << " " << clark->getName() << " " << clark->getSalary() << std::endl;
    std::cout << "danielle" << " " << danielle->getName() << " " << danielle->getSalary() << std::endl;
}