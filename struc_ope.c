#include<stdio.h>
struct add
{
    int a,b,c;
    float avg;
};
void main()
{
    struct add ad;
    struct add ad1;
    printf("Enter two numbers:");
    scanf("%d %d",&ad.a,&ad.b);
    ad.c=ad.a+ad.b;
    ad.avg=ad.c/2;
    printf("the average value is  %2f:",ad.avg);
    {
    printf("Enter two numbers:");
    scanf("%d %d",&ad1.a,&ad1.b);
    ad1.c=ad1.a+ad1.b;
    ad1.avg=ad1.c/2;
    printf("\n the average value is  %2f:",ad1.avg);
    }
}