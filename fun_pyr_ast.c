#include<stdio.h>
int printline();
int sum(int,int);
void main()
{
    int a,b,c;
    printline();
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("The sum of two numbers is %d:",c);
    printline();
}
int printline()
{
    int i;
    for(i=1;i<10;i++)
    {
        printf("*");
    }
}
int sum(int a,int b)
{
    int z;
    z=a+b;
    return z;
}