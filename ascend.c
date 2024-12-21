#include<stdio.h>
void main()
{
    int i,a[5],j,t;
    printf("Enter the values:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("given numbers in order is:");
    for(i=0;i<5;i++)
    {
        printf("\n \t%d",a[i]);
    }
    
}