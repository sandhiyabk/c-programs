#include<stdio.h>
void main()
{
    int n,b=0,a;
    printf("Enter 3 digits numbers:");
    scanf("%d",&n);
    while(n>0)
    {
    a=n%10;
    b=b*10+a;
    n=n/10;
    }
    printf("reversed is %d",b);
}