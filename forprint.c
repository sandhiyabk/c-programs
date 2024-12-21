#include<stdio.h>
void main()
{
    int a,i;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=10;i>=a;i--)
    {
        printf("%d \n",i);
    }
}