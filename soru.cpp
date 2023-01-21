#include<iostream>
#include<string.h>

//task
#define SIZE 100

int main(void)
{
    char old_file_name[SIZE];
    char new_file_name[SIZE];


    printf("Dosta ismini girin");
    scanf("%s", old_file_name);

    strcpy(new_file_name, old_file_name);
    printf("[%s] ==> [%s]\n", old_file_name, new_file_name);

}