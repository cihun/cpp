#include<stdio.h>
#include<stdlib.h>
int f(int a,int b,int c){
    return a + b + c;
}
int main(){
    const int **pp2;
    int *p1;
    const int n = 13;
    printf("%d\n", n);
    pp2 = &p1;
    *pp2 = &n;
    printf("%d\n", **pp2);
    *p1 = 10;
    printf("%d,%d\n", n, **pp2);
    getchar();
    getchar();
    return 0;
}