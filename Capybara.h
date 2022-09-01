#ifndef CAPYBARA_H
#define CAPYBARA_H

#include <string>

// Class definition for a Capybara
class Capybara 
{
public:
        int capyAge;
        std::string capyName;


        Capybara() ;                     // no name or age is required to create a Capybara
        void setName(std::string capyName);   // change the capybara's name
        std::string getName();
        void setAge(int capyAge);        // change the capybara's age
        int getAge();

        int cAge;
        std::string cName;

};
#endif //CAPYBARA_H