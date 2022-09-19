#include <array>
#include <cstring>
#include <ctime>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;


void p1(){
    char x;
    string y = "";
    while(true){
        cin.get(x);
        if(x == '@'){
            break;
        }
        if(isalpha(x)){
            if(islower(x))
                x = toupper(x);
            else
                x = tolower(x);
        }
        y += x;
    }
    cout << y;
}
void p2(){
    const int MAX = 10;
    double d[MAX];
    double donation;
    int i = 0;
    while(i < MAX && cin >> donation){
        d[i++] = donation;
    }
    int j = 0;
    double sum = 0;
    for (j = 0; j < i;j++){
        sum += d[j];
    }
    if(i == 0){
        cout << "未输入值。" << endl;
    }
    cout << "平均值为：" << sum / i << endl;
}
void p3(){
    cout << "Please enter one of the following chices:" << endl;
    cout << "c) carnivore p) pianist\nt) tree g) game\n";

    char ch;
    while(true){
        cin.get(ch);
        if(!isalpha(ch)){
            ch = 0;
        }
        switch (ch){
            case 'c':
                cout << "A maple is a carnivore\n";
                break;
            case 'p':
                cout << "A maple is a pianist\n";
                break;
            case 't':
                cout << "A maple is a tree\n";
                break;
            case 'g':
                cout << "A maple is a game\n";
                break;
            default:
                cout << "Please enter a c, p, t, or g";
                continue;
            }
            break;
    }
}
void p4(){
    const int strsize = 10;
    struct bop{
        char fullname[strsize];
        char title[strsize];
        char bopname[strsize];
        int preference;
    };
    const int max = 3;
    struct bop L[] = {{"111", "122", "133",0}, {"211", "222", "233",1}, {"311", "322", "333",2}};
    cout << "a. display by name    b. display by title\nc. display by bopname    d. display by preference\nq. quit\n";
    cout << "Enter your choice:";
    
    while(true){
        char ch;
        while(!(cin >> ch))
            cout << "plase...";
        int i = 0;

        switch(ch){
            case 'a':
                for (i = 0; i < max;i++){
                    cout << L[i].fullname << endl;
                }
                break;
            case 'b':
                for (i = 0; i < max;i++){
                    cout << L[i].title << endl;
                }
                break;
            case 'c':
                for (i = 0; i < max;i++){
                    cout << L[i].bopname << endl;
                }
                break;
            case 'd':
                for (i = 0; i < max;i++){
                    switch(L[i].preference){
                        case 0:
                            cout << L[i].fullname << endl;
                            break;
                        case 1:
                            cout << L[i].title << endl;
                            break;
                        case 2:
                            cout << L[i].bopname << endl;
                            break;
                    }
                }
                break;
            case 'q':
                goto to;
            default:
                cout << "not choice...";
                continue;
        }
        cout << "Next choice:";
    }
    to:cout << "Bye!\n";
}

void p5(){
    int m;
    while(true){
        cout << "输入你的工资：";
        if(!(cin >> m))
            break;
        if(m < 0)
            break;
        if(m < 5000)
            cout << "0";
        else if(m < 15000)
            cout << (m - 5000) * 0.1;
        else if(m < 35000)
            cout << 10000 * 0.1 + (m - 15000) * 0.15;
        else
            cout << 10000 * 0.1 + 20000 * 0.15 + (m - 35000) * 0.2;
        cout << " tvarp\n";
    }
    cout << "bye!\n";
}


int main(){
    string a;
    //p1();
    //p2();
    //p3();
    //p4();
    //p5();
    cin.clear();
    while(cin.get() != '\n')
        continue;
    cin.get();
    return 0;
}