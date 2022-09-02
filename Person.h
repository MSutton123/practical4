#ifndef PERSON_H
#define PERSON_H

#include <string>

// Class definition for a Person
class Person
{
public:
        Person();
        std::string name;

        int mySalary;
        std::string myName;

        Person(int mySalary, std::string myName); // a name and salary must be provided to create a Person
        void setName(std::string myName);         // change the Person's name
        std::string getName();
        void setSalary(int mySalary);            // change the Person's salary
        int getSalary();
        int salary;


};
#endif //PERSON_H