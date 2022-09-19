#include "p2.h"

Person::Person(const string &ln, const char *fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const{
    std::cout << lname  << std::endl;
}

void Person::FormalShow() const{
    std::cout << lname << ' ' << fname << std::endl;
}