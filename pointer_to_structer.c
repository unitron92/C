#include<stdio.h>
#include<conio.h>

int main()
{
    struct pointer_to_structer
    {
        char name;
        int year;
        int ID;
    };

    struct pointer_to_structer dr={'C', 1973, 1000};
    struct pointer_to_structer *ptr;
    ptr = &dr;

    printf("%c %d %d \n", ptr->name, ptr->year, ptr->ID);
getch();
    
    
}