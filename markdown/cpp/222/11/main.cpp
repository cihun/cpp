#include "aaa.h"
#include<new>
#include<queue>
#include<vector>
#include<list>
//#define f(x,y) (x*y)
class A{
private:
    int x, y;
    double val;
    char name[20];
    const int xxx = 100;
public:
    A(int x_,int y_,double val_=0.0, const char *name_=""){
        x = x_;
        y = y_;
        val = val_;
        strcpy(name, name_);
    }
    A operator+(double val_);
    A operator+(A obj);
    friend A operator+(int val_, A obj);
    friend std::ostream &operator<<(std::ostream &os, const A obj);
    friend double func_a(A obj1, A obj2);
};

double func_a(A obj1, A obj2){
    return obj1.val + obj2.val;
}

std::ostream &operator<<(std::ostream &os, const A obj){
    os << obj.val;
    return os;
}
int i = 42;
char c[400];

template <typename T,typename P>
inline auto func(T x, P y) -> decltype(x*y){
    return x*y;
}

class A_1{
private : 
    int x, y;
public:
    A_1(int x_, int y_) : x(x_), y(y_){}
    virtual void func(){std::cout << "这里是A" << std::endl;}
};

class B: public A_1{
public:
    B(int a, int b) : A_1(a, b){}
    void func(){std::cout << "这里是B" << std::endl;}
};


struct BBB{
    int x;
};
int main()
{
    
    using namespace std;
    cout << "Hello Wrold" << endl;
    queue<int> P;
    /*
    int i;
    int &a = *(new int);
    a = 100;
    cout << a << endl;
    delete &a;
    //int a = 50;
    cout << a << endl;
    int val = 100;
    int *p = &val;
    int &k = *p;
    cout << &val << ":" << val << endl;
    cout << &k << ":" << k << endl;
    */
    // int q = 100;
    // int *p = &q;
    // int *p2;
    // string s = "123123";
    // cout << p2 << endl;
    //*p2 = q;
    //*p2 = 1000;
    // cout << p << ';' << *p << endl;
    // auto s2 = s;
    //  int *x = new (c) int[100];
    //  for (int i = 0; i < 100;i++){
    //      x[i] = i * i;
    //  }
    //  for (int i = 0; i < 400;i++){
    //      cout << int(c[i]) << ' ';
    //      if((i+1)%16==0)
    //          cout << endl;
    //  }
    cout << 123123 << endl;
    A a(1,1,10), b(1,1,20);
    cout << func_a(a, b) << endl;

    // cout << func(2 + 5, 2.5);
    // func<int, double>;
    // A a = A(1, 1);
    // cout << "asdf" << endl;
    // // cout << p2 << ';' << *p2 << endl;

    // char **x = new char *[2];
    // x[0] = new char[10]{"asdfas"};
    // x[1] = new char[5]{"1234"};
    // cout << sizeof(x[0]) << (void *)x[0] << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << x[i];
    //     delete[] x[i];
    // }

    // delete[] x;
    // B b(3, 5);
    // A_1 *q;
    // b.func();
    // q = &b;
    // q->func();
    // queue<int> Q;
    // cout << Q.empty() << endl;
    // Q.push(23);
    // cout << Q.front() << endl;
    // cout << Q.back();
    // Q.pop();

    // vector<int> L;
    // cout << L.empty() << endl;
    // L.push_back(12);
    // cout << L.back();
    // L.pop_back();

    // list<int> K;
    // cout << K.empty() << endl;
    // K.push_front(23);

    // int(*aaa)[10];
    // int bbb[10];

    // aaa = &bbb;
    cin.get();
    return 0;
}




int strcpy(char *a,const char *b,int n){
    for (int i = 0; b[i] != '\0';i++){
        if(i>n-1)
            return 0;
        a[i] = b[i];
    }
    a[i] = '\0';
    return 1;
}