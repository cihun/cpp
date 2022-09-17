#ifndef P2_H_
#define P2_H_

#include "../aaa.h"

template <typename T>
void swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

using std::string;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person()
    {
        lname = "";
        fname[0] = '\0';
    }
    Person(const string &ln, const char *fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};

#endif