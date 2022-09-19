#include <array>
#include <cctype>
#include <cstring>
#include <ctime>
#include <iostream>
#include <math.h>
#include <string>
#include <typeinfo>
#include <vector>

class A
{
private:
    int x_;
    int y_;
    int z_;
    char s_[10];

public:
    int x_pub;
    A(const int x = 0, const int y = 0, const int z = 0, const char *s = "")
    {
        x_ = x;
        y_ = y;
        z_ = z;
        strcpy(s_, s);
    }
    ~A()
    {
        std::cout << s_ << "结束！";
    }
    double func(int a, int b, int c) const
    {
        double L = 0;
        L += std::abs(a * a - x_ * x_);
        L += std::abs(b * b - y_ * y_);
        L += std::abs(c * c - z_ * z_);
        return pow(L, 0.5);
    }
    double func(const A obj) const
    {
        return func(obj.x_, obj.y_, obj.z_);
    }
};

int main()
{
    class B
    {
    public:
        int a, b, c;
    };
    using std::cin;
    using std::cout;
    using std::endl;
    A t1 = {A{12, 13, 14}};
    A t2 = {13, 14, 15};
    using std::string;
    string alpha = "asdfg";
    string beta = alpha;
    alpha[2] = 'k';
    cout << alpha << endl;
    cout << beta << endl;
    cin.get();
    cout << "第一个function：" << t1.func(13, 14, 15) << endl;
    cin.get();
    cout << "第二个function：" << t1.func(t2) << endl;
    cin.get();

    return 0;
}