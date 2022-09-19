#include <array>
#include<typeinfo>
#include <cstring>
#include <ctime>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

double p1_func1(double x, double y);
void p1(){
    double x, y;
    while(true){
        cout << "请输入两个数字：\n";
        cin >> x;
        cin >> y;
        if(x == 0 || y == 0){
            cout << "拜\n";
            return;
        }
        cout << p1_func1(x, y) << endl;
    }
}
double p1_func1(double x,double y){
    return 2.0 * x * y / (x + y);
}

int p2_func1(double *A){
    int i = 0;
    for (i = 0; i < 10;i++){
        if(cin >> A[i])
            continue;
        break;
    }
    cin.clear();
    while(cin.get() != '\n')
        ;
    return i;
}
void p2_func2(const double *A,int t){
    int i = 0;
    for (i = 0;i<t;i++){
        cout << A[i] << ' ';
    }
    cout << endl;
}
double p2_func3(const double *A,int n){
    double avg = 0;
    int i = 0;
    for (i = 0;i < n;i++){
        avg += A[i];
    }
    return avg / n;
}
void p2(){
    double A[10];
    int n;
    n = p2_func1(A);
    p2_func2(A, n);
    cout
        << "平均成绩为：" << p2_func3(A, n) << endl;
    return;
}

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void p3_func1(const box A){
    cout << A.maker << ' ' << A.height << ' ' << A.width << ' ' << A.length << ' ' << A.volume << endl;
}
void p3_func2(box *A){
    A->volume = A->height * A->length * A->width;
}
void p3(){
    box A = {"111", 4, 4, 4, 0};
    p3_func2(&A);
    p3_func1(A);
}

//----4----略

int p5_func(int n){
    if(n == 0)
        return 1;
    return n * p5_func(n - 1);
}
void p5(){
    int n;
    while(cin >> n){
        if(n <= 0){
            break;
        }
        cout << p5_func(n);
    }
    cin.clear();
}

double p10_func1(double x,double y){
    return x + y;
}
double p10_func2(double x,double y){
    return x - y;
}
double p10_func3(double x,double y){
    return x * x + y * y;
}
void p10(){
    double (*p[3])(double, double) = {p10_func1, p10_func2, p10_func3};
    int i = 0;
    double x, y;
    cin >> x;
    cin >> y;
    for (i = 0; i < 3;i++){
        cout << "第" << i+1 << "个函数" << p[i](x, y) << endl;
    }
}
int main(){
    //p1();
    //p2();
    //p3();
    //p5();
    p10();
    cin.get();
    cin.get();
    return 0;
}