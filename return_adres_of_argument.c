#include<stdio.h>

int* foo(int* ptr)
{
    int* p = ptr;

    return p;
}

int main()
{
    int y = {0};
    printf("%d", foo(&y));

}