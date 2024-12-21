#include<stdio.h>
void main()
{
    int a,b,c;
    a=10;
    b=20;
    c=a|b;
    printf("the bitwise or:%d \n",c);
    c=a&b;
    printf("the bitwise and:%d \n",c);
    c=a>>b;//shift the value by right side with b value's position 
    printf("the right shift value:%d \n",c);
    c=a<<b;
    printf("the left swift value:%d \n",c);
    c=a^b;
    printf("the bitwise ex-or:%d \n",c);
} 