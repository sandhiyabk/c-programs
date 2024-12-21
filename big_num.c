#include<stdio.h>
void main()
{
    int i,a[5],t;
    printf("Enter the values:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<5;i++)
        {
            if(t<a[i])
            t=a[i];
        }
    printf("the biggest number is %d",t);
    
}