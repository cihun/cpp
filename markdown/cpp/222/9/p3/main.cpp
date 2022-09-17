#include<iostream>
#include<cstring>
#include<new>

using namespace std;

struct chaff{
    char dross[20];
    int slag;
};

char x[100];

void show(const chaff &c){
    cout << c.dross << ' ' << c.slag << endl;
}

int main(){
    chaff *p1 = new (x) chaff[2];
    chaff *p2 = new chaff[2];
    strcpy(p1->dross,"111");
    strcpy((p1 + 1)->dross, "222");
    strcpy(p2->dross,"1112");
    strcpy((p2 + 1)->dross, "2222");
    p1->slag = 111;
    (p1 + 1)->slag = 222;
    p2->slag = 1112;
    (p2 + 1)->slag = 2222;
    show(*p1);
    show(p1[1]);
    show(*p2);
    show(p2[1]);
    delete[] p2;
    return 0;
}