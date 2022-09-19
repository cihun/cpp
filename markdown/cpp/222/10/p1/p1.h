#ifndef P1_H_
#define P1_H_

#include "../aaa.h"
using std::string;

class Bank{
private:
    string name_;
    string user_;
    double m_;

public:
    Bank(const string name, const string user, const double m = 0.0);
    ~Bank(){}
    void show() const;
    void push(const double x);
    void pop(const double x);
};

#endif