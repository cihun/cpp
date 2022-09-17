#include<iostream>
#include<vector>
#include<array>
#include<cstring>
#include<string>

using namespace std;

void p1(){
    string first_name;
    string last_name;
    char grade;
    int age;
    cout << "What is your first name?";
    cin >> first_name;
    cout << "What is your last name?";
    cin >> last_name;
    cout << "What letter grade do you deserve?";
    cin >> grade;
    cout << "Wht is your age?";
    cin >> age;
    cout << "Name:" << last_name + ", " + first_name << endl;
    cout << "Grade:" << char(grade + 1) << endl;
    cout << "Age:" << age << endl;
}
void p3(){
    //pass
    cout << "vary esay";
}
void p4(){
    p3();
}
void p5(){
    struct CandyBar{
        string id;
        double G;
        int K;
    };
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "id=" << snack.id << endl;
    cout << "重量=" << snack.G << endl;
    cout << "卡路里=" << snack.K << endl;
}
//void p6();
void p7(){
    struct P{
        string id;
        double R;
        double G;
    };
    cout << "披萨公司的名称:";
    P p1;
    getline(cin, p1.id);
    cout << "披萨半径";
    cin >> p1.R;
    cout << "披萨的重量:";
    cin >> p1.G;
}
void p8(){
    struct P{
        string id;
        double R;
        double G;
    };
    cout << "披萨公司的名称:";
    P *p1 = new P;
    getline(cin, p1->id);
    cout << "披萨半径";
    cin >> p1->R;
    cout << "披萨的重量:";
    cin >> p1->G;
}
int main(){
    //p1();

    cin.get();
    cin.get();
    return 0;
}