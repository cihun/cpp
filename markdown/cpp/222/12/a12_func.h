#ifndef A12_FUNC_H_
#define A12_FUNC_H_
#include "a12.h"
using namespace std;

int StringBad::num_strings = 0;

StringBad::StringBad(const char *s){
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
    cout << num_strings << ":\"" << str
         << "\" object created\n";
}

StringBad::StringBad(){
    len = 4;
    str = new char[4];
    strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ":\"" << str
         << "\" object created\n";
}

StringBad::~StringBad(){
    cout << "\"" << str << "\" object deleted, ";
    --num_strings;
    cout << num_strings << " left\n";
    delete[] str;
}
ostream & operator<<(ostream & os, const StringBad & st){
    os << st.str;
    return os;
}
#endif
