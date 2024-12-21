#include<stdio.h>
int display();
void main()
{
    int a,b,x;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    x=display(a,b);
}
int display(int a,int b)
{
    int c;
    c=a*b;
    printf("mulplication of 2 values is:%d",c);
    
}