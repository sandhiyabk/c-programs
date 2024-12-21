#include<stdio.h>
void main()
{
    int a,b,*p,*q,tot;// pointer symbol * is only we could used to address of another variable value 
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    tot=*p+*q;
    printf("\n %d %d",a,b);
    printf("\n %d %d",&a,&b);
    printf("\n %d %d",p,q);
    printf("\n %d %d",*p,*q);
    printf("\n %d",tot);
}