#include<iostream>
int tom = 3;
int dick = 30;
static int harry = 300;

extern const int states = 50;

void remote_access();

int main(){
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << "= &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    cin.get();
    return 0;
}