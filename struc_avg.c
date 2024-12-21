#include<stdio.h>
struct add
{
    int a,b,c;
    float avg;
};
void main()
{
    struct add ad;
    printf("Enter two numbers:");
    scanf("%d %d",&ad.a,&ad.b);
    ad.c=ad.a+ad.b;
    ad.avg=ad.c/2;
    printf("the average value is  %2f:",ad.avg);
}