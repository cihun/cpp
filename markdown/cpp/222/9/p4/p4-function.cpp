#include<iostream>
#include "p4.h"

using namespace std;

namespace SALES{
    // const int QUARTERS = 4;
    // struct Sales{
    //     double sales[QUARTERS];
    //     double average;
    //     double max;
    //     double min;
    // };
    void setSales(Sales &s, const double ar[], int n){
        int i;
        if(n != 0){  
            s.max = 0;
            s.min = ar[0];
            s.average = 0;
        }
        else{
            s.max = 0;
            s.min = 0;
            s.average = 0;
        }
        for (i = 0; i < QUARTERS;i++){
            if(i < n){
                s.average += ar[i] / n;
                s.sales[i] = ar[i];
                if(s.max < ar[i]){
                    s.max = ar[i];
                }
                if(s.min > ar[i]){
                    s.min = ar[i];
                }
            }
            else{
                s.sales[i] = 0;
            }
        }
    }
    void setSales(Sales &s){
        double ar[QUARTERS];
        int i = 0;
        for (i = 0; i < QUARTERS;i++){
            cout << "输入数值：";
            cin >> ar[i];
        }
        setSales(s, ar, QUARTERS);
    }
    void showSales(const Sales &s){
        int i = 0;
        for (i = 0; i < QUARTERS;i++){
            cout << s.sales[i] << endl;
        }
        cout << "avg:" << s.average << endl;
        cout << "max:" << s.max << endl;
        cout << "min " << s.min << endl;
    }
}