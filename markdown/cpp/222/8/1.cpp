#include <array>
#include <typeinfo>
#include <cstring>
#include <ctime>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void p1();
void p1_func(string *p, int n=1);

struct BandyBar{
    char name[20];
    double g;
    int t;
};
void p2();
void p2_func(BandyBar &x,const char*name = "Millennium Munch", double g=2.85, int t=350);
void p2_func2(const BandyBar &x);

void p3();
void p3_func(string &s);

struct stringy{
    char *str;
    int ct;
};
void p4();
void p4_func();
void set(stringy &beany, const char *testing);
void show(const stringy &stry, int n = 1);
void show(const char *str, int n = 1);

template<typename T>
T max5(T *L){
    int i = 0;
    T m = L[0];
    for (i = 0; i < 5;i++){
        if(L[i] > m){
            m = L[i];
        }
    }
    return m;
}
void p5(){
    int L_i[] = {1, 2, 5, 4, 3};
    double L_d[] = {1.2, 1.3, 1.6, 1.3, 1.4};
    cout << max5(L_i) << endl;
    cout << max5(L_d) << endl;
}

template<typename T>
T maxn(const T *L, int n){
    int i = 0;
    T m = L[0];
    for (i = 0; i < n;i++){
        if(L[i] > m){
            m = L[i];
        }
    }
    return m;
}
template<> const char* maxn<const char*>(const char * const *L, int n){
    int i = 0, x = 0, y = 0;
    const char* m = NULL;
    for (i = 0; i < n;i++){
        y = strlen(L[i]);
        if(y > x){
            x = y;
            m = L[i];
        }
    }
    return m;
}
void p6(){
    int L_i[6] = {6, 4, 2, 1, 3, 5};
    double L_d[4] = {.1, .5, .6, .9};
    const char *strs[5] = {"1", "dfsdf", "ssd", "e", "43ds"}; // const char **strs
    cout << maxn(L_i, 6) << endl;
    cout << maxn(L_d, 4) << endl;
    cout << maxn(strs, 5) << endl;
}

int main()
{

    //p1();
    //p2();
    //p3();
    //p4();
    //p5();
    //p6();
    //cin.get();
    return 0;
}

void p1(){
    string x = "123";
    p1_func(&x);
    p1_func(&x,3);
}
void p1_func(string *p, int n){
    int i;
    for (i = 0; i < n;i++){
        cout << *p;
    }
    cout << endl;
}

void p2(){
    BandyBar x;
    p2_func(x);
    p2_func2(x);
    p2_func(x, "2134", 23.23, 2323);
    p2_func2(x);
}
void p2_func(BandyBar &x,const char*name,double g,int t){
    int i = 0;
    for (i = 0; name[i];i++){
        x.name[i] = name[i];
    }
    x.name[i] = '\0';
    x.g = g;
    x.t = t;
}
void p2_func2(const BandyBar &x){
    cout
        << x.name << endl
        << x.g << endl
        << x.t << endl;
}

void p3(){
    string s;
    char s1[] = "adsfasd";
    getline(cin, s);
    while(s != "q"){
        p3_func(s);
        cout << s << endl;
        getline(cin, s);
        }
}
void p3_func(string &s){
    int i = 0;
    for (i = 0; i < s.length();i++){
        s[i] = toupper(s[i]);
    }
}

void p4(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
}
void set(stringy &beany, const char *testing){
    int n = strlen(testing);
    beany.str = new char[n + 1];
    int i;
    for (i = 0; i < n;i++){
        beany.str[i] = testing[i];
    }
    beany.str[n] = '\0';
    beany.ct = n;
}
void show(const stringy &stry, int n){
    int i;
    for (i = 0; i < n;i++)
        cout << stry.str << endl;
}
void show(const char *str, int n){
    int i;
    for (i = 0; i < n;i++)
        cout << str << endl;
}



