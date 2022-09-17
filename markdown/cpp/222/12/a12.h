#ifndef A12_H_
#define A12_H_

#include <array>
#include <typeinfo>
#include <cstring>
#include <ctime>
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

class StringBad{
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad(const char *s);
    StringBad();
    ~StringBad();
    friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
};
#endif
