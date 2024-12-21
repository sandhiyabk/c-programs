#include<stdio.h>
void function1();
void function2();
void main()
{
    int m=1000;
    function2();
    printf("m is %d \n",m);
}
void function1()
{
    int m=10;
    printf("m is %d \n",m);
    return;
}
void function2()
{
    int m=100;
    function1();
    printf("m is %d \n",m);
    return;
}