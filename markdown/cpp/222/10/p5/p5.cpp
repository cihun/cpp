#include "p5.h"

extern int a;

bool Stack::is_empty(){
    if(top == &L){
        return true;
    }
    return false;
}

Stack::~Stack(){
    Item x;
    while(pop(x)){
        std::cout << x.fullname << ' ' << x.payment << std::endl;
    }
}

bool Stack::push(const Item &x){
    NLink a = new Node;
    a->val = x;
    a->next = top;
    top = a;
    return true;
}

bool Stack::pop(Item &x){
    if(is_empty()){
        return false;
    }
    x = top->val;
    NLink q = top;
    top = q->next;
    delete q;
    return true;
}