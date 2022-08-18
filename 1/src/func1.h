#ifndef FUNC_1_H
#define FUNC_1_H
#include<iostream>


template <typename T>
void Swap(T &x, T &y){
    T z;
    z = x;
    x = y;
    y = z;
}
#endif
