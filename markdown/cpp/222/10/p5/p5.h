#ifndef P5_H_
#define P5_H_

#include "../aaa.h"

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

struct Node
{
    Item val;
    Node *next;
};

typedef Node *NLink;

class Stack
{
private:
    Node L;
    NLink top;

public:
    Stack() 
    {
        top = &L;
    }
    ~Stack();
    bool is_empty();
    bool push(const Item &x);
    bool pop(Item &x);
};
#endif