#include<stdio.h>
#include<string.h>
#include<string>    

#define SIZE 100

char* mystrcat (char* p1, const char* p2)
{
    char* pret = p1;
    while(*p1)
    ++p1;
    while(*p1++ = *p2++)
    ;
    return pret;
}
int main()
{
    char s1[SIZE] = "necati";
    char s2[SIZE] = "ergin";

    printf("[%s]\n",s1);

}