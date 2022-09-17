#include "p1.h"

Bank::Bank(const string name, const string user, const double m){
    name_ = name;
    user_ = user;
    m_ = m;
}

void Bank::show() const{
    using std::cout;
    using std::endl;
    cout << "储户姓名：" << name_ << endl;
    cout << "账户：" << user_ << endl;
    cout << "存款：" << m_ << endl;
}

void Bank::push(const double x){
    using std::cout;
    using std::endl;
    m_ += x;
    cout << "存款为：" << m_ << endl;
}

void Bank::pop(const double x){
    using std::cout;
    using std::endl;
    if(m_ - x < 0){

        cout << "无法取出,当前存款为：" << m_ << endl;
        return;
    }
    m_ -= x;
    cout << "存款为：" << m_ << endl;
}