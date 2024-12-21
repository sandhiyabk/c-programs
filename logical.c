#include<stdio.h>
void main()
{
    int a,b,c;
    a=10;
    b=20;
    c=(a>b)&&(a>=b);
    printf("logical and:%d \n",c);
    c=(a<b)&&(a<=b);
    printf("logical and:%d \n",c);
     c=(a>b)||(a<=b);
    printf("logical or:%d \n",c);
     c=(a<b)||(a>=b);
    printf("logical or:%d \n",c);
    c=(a!=b);
    printf("logical not:%d \n",c);

}