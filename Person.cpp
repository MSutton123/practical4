#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(int mySalary, string myName) {
    name = myName;
    salary = mySalary;
}

void Person::setName(string myName) {
    name = myName;
    return;
}

string Person::getName() {
    return name;
}

void Person::setSalary(int mySalary) {
    salary = mySalary;
    return;
}

int Person::getSalary() {
    return salary;
}