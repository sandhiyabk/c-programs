#include<stdio.h>
void main()
{
    int a,b,c,n,i;
    a=-1,b=1;
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}