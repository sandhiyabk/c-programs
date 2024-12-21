#include<stdio.h>
void add();//it represents that these functions can be explained later in this code to compier
void sub();
int mul();
float div();
void main()
{
    add();
    sub();
    mul();
    div();
}
void add()
{
    int a=10,b=8,c;
    c=a+b;
    printf("the addition value is: %d \n",c);
}
void sub()
{
    int a=10,b=8,c;
    c=a-b;
    printf("the subtraction value is: %d \n",c);
}
int mul()
{
    int a=10,b=8,c;
    c=a*b;
    printf("the multiplication value is: %d \n",c);
}
float div()
{
    int a=10,b=8,c;
    c=a/b;
    printf("the division value is: %d \n",c);
}