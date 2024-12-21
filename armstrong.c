#include<stdio.h>
void main()
{
    int n,m,b=0,a;
    printf("Enter 3 digits numbers:");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
    a=n%10;
    b+=(a*a*a);
    n=n/10;
    }
    if(m==b)
    {
    printf("armstrong number");
    }
    else
    {
        printf("it is not a armstrong number");
    }
}