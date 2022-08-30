// string1.h -- fixed and augmented string class definition

#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;

class String{
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String(const char * s);
    String();
    String(const String &); //复制构造函数
    ~String();
    int length () const {return len; } //长度，内联函数，const

    String & operator=(const String &); //重载赋值函数
    String & operator=(const char *); //char赋值给String
    char & operator[](int i); //中括号，取字符串某个位置
    const char & operator[](int i) const; //同上，为了适用于const变量

    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream & operator<<(ostream & os, const String &st);
    friend istream & operator>>(istream & is, String &st);

    static int HowMany();
};

#endif