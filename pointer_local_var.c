#include<stdio.h>

int * foo(void)
{
    int x = 10;
    int * p = &x;
    return p;
}

int main()
{
   int* foo();
}