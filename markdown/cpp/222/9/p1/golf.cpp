#include<iostream>
#include "golf.h"

using namespace std;

void setgolf(golf &g, const char *name, int hc){
    int i = 0;
    while(name[i] != '\0'){
        //cout << i << endl;
        g.fullname[i] = name[i];
        i += 1;
    }
    g.fullname[i] = '\0';
    g.handicap = hc;
}

int setgolf(golf &g){
    char name[Len];
    int hc;
    cout << "input name:\n";
    cin.get();
    cin.get(name, Len);
    if(name[0] == '\0'){
        return 0;
    }
    while(cin.get() != '\n')
        ;
    cout << "input hc:\n";
    cin >> hc;
    setgolf(g, name, hc);
    return 1;
}

void handicap(golf &g, int hc){
    g.handicap = hc;
}

void showgolf(const golf &g){
    cout << "name:"
         << g.fullname << endl
         << "hc:" << g.handicap << endl;
}
