#include<stdio.h>
struct add
{
    int a,b,c;
    float avg;
}ad[100];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
    printf(" \n Enter two numbers:");
    scanf("%d %d",&ad[i].a,&ad[i].b);
    ad[i].c=ad[i].a+ad[i].b;
    ad[i].avg=ad[i].c/2;
    printf("\n the average value is  %2f:",ad[i].avg);
    }
}