#include "p1.h"

int main(){
    Bank A("HelloWorld", "0001");
    A.show();
    A.push(100);
    A.pop(1000);
    A.pop(50);
    A.show();

    std::cin.get();
    return 0;
}
