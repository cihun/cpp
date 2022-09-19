#include<iostream>
#include "golf.h"

using namespace std;

int main(){
    int n;
    cout << "输入数量:\n";
    cin >> n;
    golf *x = new golf [n+1];
    setgolf(x[0], "Ann Birdfree", 24);
    int i = 0;
    for (i = 0; i < n;i++){
        if( setgolf(x[i+1]) == 0){
            break;
        }
    }
    showgolf(x[0]);
    handicap(x[0], 77);

    for (i = 0; i < n + 1; i++){
        showgolf(x[i]);
    }
    return 0;
}