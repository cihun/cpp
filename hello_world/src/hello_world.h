#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H

#include <iostream>
void print(int n);

class A{
private:
    double x,y;
public:
    A(double x_ = 0, double y_ = 0);
    void show();
    void set_x(double x_){x = x_;};
    void set_y(double y_){y = y_;};
    ~A();
};

#endif