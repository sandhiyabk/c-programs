#include<stdio.h>
void main()
{
    int a=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
        printf("%d \n",a);
        a++;
    }
    while(a<=n);
}