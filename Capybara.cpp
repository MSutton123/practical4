#include <iostream>
#include "Capybara.h"

using namespace std;

Capybara::Capybara()
{
    cAge = 0;
    cName = "?";
}

void Capybara::setName(string capyName)
{
    cName = capyName;
    return;
}

string Capybara::getName()
{
    return cName;
}

void Capybara::setAge(int capyAge)
{
    cAge = capyAge;
    return;
}

int Capybara::getAge()
{
    return cAge;
}