#include <iostream>
#include<fstream>
#include "hello_world.h"
#include "string1.h"
using namespace std;
int main(){
    print(10);

    ofstream f;
    f.open("./xxx",ios::out);
    f << "asdfasdf" << endl;
    String s;
    cin >> s;
    cout << s << endl;
    f.close();
    return 0;
}