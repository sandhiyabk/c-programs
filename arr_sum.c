#include<stdio.h>
void main()
{
    int a[5],sum,i;
    printf("Enter the numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Th values:");
    sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%d \n",sum);
    
}