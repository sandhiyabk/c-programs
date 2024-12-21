#include<stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("%u \n",a);//%u means unsigned integers
    printf("%u \n",*p);
    printf("%u \n",*(*q));
    printf("%u \n",*(*(*r)));

}