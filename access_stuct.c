#include<stdio.h>

int main (){
struct MyStruct
{
 int x;
 int y;
};
struct MyStruct myObject;
myObject.x = 42;
myObject.y = 123;
printf(".x = %i, .y = %i\n", myObject.x, myObject.y); 

return 0;
}