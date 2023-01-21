#include<stdio.h>

#define asize(a)  (sizeof(a) / sizeof(*a))

int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    for (int i = -2; i < (int)asize(arr) - 2; ++i)
    printf("%d", arr[i + 2]);
}


