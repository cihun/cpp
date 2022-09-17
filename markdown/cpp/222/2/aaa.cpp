#include<iostream>
using namespace std;

void p1();
void p2();
void p3();
void p3_1()
{
    cout << "Tree blind mice" << endl;
}
void p3_2()
{
    cout << "See how they run" << endl;
}
void p4()
{
    cout << "Enter your age:";
    int age;
    cin >> age;
    cout << "Number:" << age * 12 << endl;
}
double p5(double T)
{
    return 1.8 * T + 32;
}
void p6()
{
    cout << "Enter the number of light years:";
    double light_year;
    cin >> light_year;
    cout << light_year << " light year = " << light_year * 63240 << " astronomical units." << endl;
}
void p7(int h,int m)
{
    cout << "Time: " << h << ":" << m << endl;
}

int main(){
    p1();
    p2();
    p3();
    p4();
    cout << "Please enter a Celsius Value:";
    int T;
    cin >> T;
    cout << T << " degrees Celsius is " << p5(T) << " degrees Fahrenheit." << endl;
    p6();
    cout
        << "Enter the number of hours:";
    int h,m;
    cin >> h;
    cout << "Enter the number of minutes:";
    cin >> m;
    p7(h, m);
    cin.get();
    cin.get();
    return 0;
}
void p1()
{
    cout << "aaa" << endl;
    cout << "bbb" << endl;
}
void p2()
{
    double L;
    cin >> L;
    L = L * 220;
    cout << L << endl;
}
void p3()
{
    p3_1();
    p3_1();
    p3_2();
    p3_2();
}