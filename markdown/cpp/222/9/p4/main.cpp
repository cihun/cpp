#include <iostream>
#include "p4.h"

using namespace std;

int main(){
    using SALES::Sales;
    Sales x;
    SALES::setSales(x);
    SALES::showSales(x);
    return 0;
}