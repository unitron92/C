#include<stdio.h>
#include<string.h>


/*
strcmp function which return int!
if p1 == p2  return 0
If p1 > p2 return  >=1
If p1 < p2 return  =<1

*/
int strcmp(const char* p1, const char* p2);


int main()
{
    char s1[] = "bircan";
    char s2[] = "bircan";

    if(!strcmp(s1, s2)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


}