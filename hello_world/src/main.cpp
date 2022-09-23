#include <iostream>
#include<fstream>
#include "hello_world.h"
#include "string1.h"
#include <vector>
#include <string>

using namespace std;
int main(){
    print(10);
    vector <string> x;
    string y = "xxx";
    x.push_back("aaaaa");
    x.push_back(y);
    y += "zzz";
    x.push_back(y);
    cout << x[0] << x[1] << x[2] << endl;
    String s;
    cin >> s;
    cout << s << endl;
    return 0;
}