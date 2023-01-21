#include<stdio.h>
#include<string.h>

int main ()
{
    char *p[] ={"ahmed", "hakki", "deniz", "erdem", "tan"};
    for(int i = 0; i < 5; ++i){
        puts(p[i]); 
    }
}