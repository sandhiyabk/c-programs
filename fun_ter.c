#include<stdio.h>
int display();
void main()
{
    int x;
    x=display();
    printf("The greatest number is:%d",x);
}
int display()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    c=(a>b)?a:b;
    return c;
}