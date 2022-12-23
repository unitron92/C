#include<stdio.h>

int* foo(int* p)
{
    ++p;
    ++p;
    return p;

}

int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};
    int* p = foo(a);
    *p = 999;
    printf("%d", a[2]);

}