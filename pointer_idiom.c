#include<stdio.h>
#include<stdlib.h>
#include<string.h>



#define SIZE 100
char *mystrcopy(char* pdest, const char* psourse){
     char* pret = pdest;
    while(*psourse != '\n')
    {
       
        *pdest = *psourse;
        ++pdest;
        ++psourse;
    }
    *pdest = '\0';
    return  pret;
}

int main(void)
{
    char source[SIZE];
    char dest[SIZE];

    printf("Bir yaza girin: ");
    gets(source);
    mystrcopy(dest, source);
    printf("[%s] [%s]\n", dest, source);


}