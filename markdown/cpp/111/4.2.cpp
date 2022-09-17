#include<iostream>
#include<cstring>
#include<vector>
#include<array>

int aaa(){
    const int N = 10;
    std::vector<std::string> str1(N);
    std::array<std::string, N> str2;
    return 0;
}
using namespace std;
struct A{
    int a;
    int b;
    string c;
};
struct A_bit_field{
    int a : 32;
    int : 32;
    char b : 8;
    char c : 8;
};

int main(){
    //    char str_a[10], str_b[10];
    //    cin.get(str_a, 10);
    //    cin.clear();
    //    cin.get(str_b, 10);
    //    cin.clear();
    //    char c = cin.get();
    //    cout << "第一次输入："
    //         << int(str_a[0]) << endl
    //         << int(str_b[0]) << endl
    //         << "c的值为：" << int(c);
    //A B = {5, 10};
    //A_bit_field C;
    //C.a = 25;
    //C.b = 'E';
    //C.c = 'F';
    //cout << C.a << ' ' << C.b << ' ' << C.c << endl;
    //cout << sizeof(B) <<' ' << sizeof(C) <<endl;
    //cout <<  ' ' << sizeof(int);
    //cout << "hello"<<endl;
    //cout << B.a << B.b << B.c << endl;
    //cin >> B.c;
    //cout << B.c;
    //cout << B.c.size();
    //const int N = 5;
    //double M = 6;
    //const int *p = &N;
    //double *q;
    //q = &M;
    //*(q+1) = 12.0;
    //int **p1;
    //p1 = (int**)&p;
    //**p1 = 18;
    //cout << *p1 <<' '<<  p1 << endl;
    //cout << &N << ' ' << &M << endl;
    //cout << N << *(q+1);

    //int array_1[10];
    //int *q = array_1;
    //int (*p)[10] = &array_1;
    //int array_2[2][10];
    //p = array_2;
    //cout << sizeof(p) << ' ' << sizeof(array_2) << endl;
    //cout << sizeof(*p) << sizeof(array_2[0]) << endl;
    //string s1 = "Waldorf Salad";
    struct fish{
        string id;
        int G;
        double L;
    };
    fish aaa;
    enum Response
    {
        Yes = 1,
        No = 0,
        Maybe = 2
    };
    double ted = 12.43;
    double *lf_p = &ted;
    cout << *lf_p;
    float treacle[10];
    int i = 0;
    for (i = 0; i < 10;i++){
        treacle[i] = i * 0.1;
    }
    float *f_p_treacle = treacle;
    cout << *(f_p_treacle) << ',' << *(f_p_treacle + 10) << endl;
    int n;
    cin >> n;
    int *d_p = new int[n];
    vector<int> vi(n);
    fish *fish_p_15 = new fish;
    cout << fish_p_15->G << fish_p_15->id << fish_p_15->L;
    const int N = 10;
    
    cin.get();
    cin.get();
    return 0;
}