#include<stdio.h>
void main()
{
    int num[]={24,35,56,78,89};
    int i;
    for(i=0;i<=5;i++)
    {
        printf("\n element number:%d",i);
        printf("\n address is %d",&num[i]);
    }
}