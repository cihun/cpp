#ifndef P7_H_

#define P7_H_
#include "../aaa.h"

using namespace std;

class complex{
private:
    double x, y;
public:
    complex(){
        x = 0;
        y = 0;
    }
    complex(double x_,double y_ = 0){
        x = x_;
        y = y_;
    }
    friend complex operator+(complex A, complex B){
        complex C(A.x + B.x, A.y + B.y);
        return C;
    }
    friend complex operator-(complex A, complex B){
        complex C(A.x - B.x, A.y - B.y);
        return C;
    }
    friend complex operator*(complex A, complex B){
        complex C(A.x * B.x - A.y * B.y, A.x * B.y + A.y * B.x);
        return C;
    }
    complex operator~(){
        complex C(x, -y);
        return C;
    }
    friend ostream & operator<<(ostream & os, complex A){
        os << "(" << A.x << "," << A.y << "i)";
        return os;
    }
    friend istream & operator>>(istream & os, complex & A){
        cout << "real:";
        os >> A.x;
        cout << "imaginary:";
        os >> A.y;
        return os;
    }
};

#endif