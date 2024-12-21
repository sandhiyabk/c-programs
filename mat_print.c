#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter the numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Th values:");
    for(i=0;i<5;i++)
    {
        printf("%d \n",a[i]);
    }
}