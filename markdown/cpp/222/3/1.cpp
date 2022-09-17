#include<iostream>
using namespace std;

void p1(){
    cout << "输入你的身高（厘米）：___\b\b\b";
    const int K = 100;
    int H_cm;
    cin >> H_cm;
    cout << "你的身高为" << H_cm / K << "米" << H_cm % K << "厘米\n";
}
void p2(){
    cout << "输入你的身高：___\b\b\b";
    double h;
    cin >> h;
    h = h / 100;
    cout << "输入你的体重：___\b\b\b";
    int m;
    cin >> m;
    const double K1 = 0.0254, K2 = 2.2;
    const int K3 = 12;
    cout << "身高：" << int((h / K1) / K3) << "英尺" << h / K1 - 12*int((h / K1) / K3) << "英寸，体重：" << m * K2 << endl;
    cout << "BMI=" << m / (h * h) << endl;
}
void p3(){
    int d, m, s;
    cout << "Enter a latitude in degrees, minutes, and seconds:\n"
         << "First, enter the degrees:";
    cin >> d;
    cout << "Next, enter the minutes of arc:";
    cin >> m;
    cout << "Finally, enter the seconds of arc:";
    cin >> s;
    cout << d << " degrees, " << m << " minutes, " << s << " seconds = " << d + (m + s / 60.0) / 60.0 << " degrees\n";
}
void p4(){
    long long int sum_s;
    int d, h, m, s;
    cout << "Enter the number of seconds:";
    cin >> sum_s;
    m = (sum_s / 60)%60;
    h = (sum_s / (60*60))%24;
    d = sum_s /(60*60*24);
    s = sum_s%60;
    cout << sum_s << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds\n";
}
void p5(){
    cout << "Enter the world's population:"; //7596934179
    long long int p_all;
    cin >> p_all;
    long long int p_CN;
    cout << "Enter the population of the CN:"; // 1411780000
    cin >> p_CN;
    cout<< "The population of the CN is " 
         << (p_CN *1.0/ p_all) * 100 << "% of the world population.\n";
}
void p6(){
    cout << "输入公里：";
    double L;
    cin >> L;
    cout << "输入消耗汽油量:";
    double G;
    cin >> G;
    cout << "每100公里的耗油量为：" << 100 * G / L << endl;
}
void p7(){
    cout << "输入100公里的耗油量：";
    double cost;
    cin >> cost;
    cost = cost / 3.785;
    cout << "每英里消耗的汽油量为:" << 62.14 / cost;
}

int main(){
    //p1();
    //p2();
    //p3();
    //p4();
    //p5();
    //p6();
    p7();
    cin.get();
    cin.get();
    return 0;
}