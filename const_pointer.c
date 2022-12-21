#include<stdio.h>
// const before * and after.
int main(){

    int b = 50;
    int* p =&b;
    (*p)++;
    p++;
    return 0;
}