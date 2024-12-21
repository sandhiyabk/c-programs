#include<stdio.h>
void main()
{
    int i,marks[10],sum=0,avg;
    for(i=1;i<=5;i++)
    {
        printf("Enter the marks");
        scanf("%d",&marks);
    }
    for(i=1;i<=5;i++)
    {
        sum=sum+i;
    }
    avg=sum/5;
    printf("Average is %d",avg);
}