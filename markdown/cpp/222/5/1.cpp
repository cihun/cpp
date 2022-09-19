#include <array>
#include <cstring>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

void P_1()
{
    int a, b;
    cout << "请输入第一个整数：";
    cin >> a;
    cout << "请输入第二个整数";
    cin >> b;
    int sum = 0, i;
    for (i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << a << " + " << b << " = " << sum;
}

void P_2()
{
    const int N = 100;
    array<long double, N + 1> A;
    int i = 0;
    A[0] = 1;
    A[1] = 1;
    for (i = 2; i < N + 1; i++)
    {
        A[i] = A[i - 1] * i;
    }
    for (i = 0; i < N + 1; i++)
    {
        cout << i << "! = " << A[i] << endl;
    }
}

void P_3()
{
    double sum = 0, x;
    cout << "请输入数字：";
    cin >> x;
    while (x)
    {
        sum += x;
        cout << "当前总和为：" << sum << "，请输入新的数字（退出输入0）：";
        cin >> x;
    }
}

void P_4()
{
    double begin = 100, Daphne = 100, Cleo = 100;
    double D_k = 0.1, C_k = 0.05;
    int i = 0;
    do
    {
        Daphne += begin * D_k;
        Cleo += Cleo * C_k;
        i++;
    } while (Cleo < Daphne);
    cout << "年份：" << i << ","
         << "Daphne: " << Daphne << " ,Cleo: " << Cleo << endl;
}

void P_5()
{
    string A[] = {
        "一月", "二月", "三月", "四月", "五月", "六月", "七月", "八月", "九月", "十月", "十一月", "十二月"};
    const int M = 12;
    int i = 0,cost[12],sum = 0;
    for (i = 0; i < M;i++){
        cout << A[i] << "的销售量为：";
        cin >> cost[i];
        sum += cost[i];
    }
    cout << "销售总量为:" << sum;
}

void P_6(){
    string A[] = {"一月", "二月", "三月", "四月", "五月", "六月", "七月", "八月", "九月", "十月", "十一月", "十二月"};
    const int M = 12, N = 3;
    int i,j, cost[N][M],sum[N] = {0},sum_all = 0;
    for (i = 0; i < N;i++){
        for (j = 0; j < M;j++){
            cout << "第" << i+1 << "年" << A[j] << "的销售量为：";
            cin >> cost[i][j];
            sum[i] += cost[i][j];
            
        }
        sum_all += sum[i];
    }
    for (i = 0; i < N;i++){
        cout << "第" << i+1 << "年的总销售量为：" << sum[i] << endl;
    }
    cout << "总销售量为：" << sum_all << endl;
}

void P_7(){
    struct car{
        string id;
        int time;
    };
    cout << "汽车数量：";
    int n;
    cin >> n;
    cin.get();
    car *cars = new car[n];
    int i;
    for (i = 0;i < n;i++){
        cout << "Car #" << i + 1 << ":\n";
        cout << "请输入汽车的供应商：";
        getline(cin, cars[i].id);
        cout << "请输入汽车的生产年份：";
        cin >> cars[i].time;
        cin.get();
    }
    for (i = 0; i < n; i++){
        cout << cars[i].time << ' ' << cars[i].id << endl;
    }
}

void P_8(){
    string a;
    cout << "Enter words (to stop, type the word done):";
    int i = -1;
    do{
        i++;
        cin >> a;
    } while (a != "done");
    cout << "You entered a total of " << i << " words.\n";
}

void P_10(){
    const char a = '.', b = '*';
    cout << "Enter number of rows:";
    int n;
    cin >> n;
    int i,j;
    for (i = 0; i < n;i++){
        for (j = 0;j < n-i-1;j++){
            cout << a;
        }
        for (j = n - i - 1; j < n;j++){
            cout << b;
        }
        cout << endl;
    }
}
int main()
{
    // char s1[] = "abcd", s2[] = "Abcd";
    // cout << R"("abcd"和"Abcd"比较结果为：)" << strcmp(s1, s2) << endl;
    // typedef int* int_p;
    // int_p p, q;

    // double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
    // for (double x : prices){
    //     cout << x << std::endl;
    // }
    // P_1();
    // P_2();
    // P_3();
    // P_4();
    // P_5();
    // P_6();
    // P_7();
    // P_8();
    P_10();
    cin.get();
    cin.get();
    return 0;
}