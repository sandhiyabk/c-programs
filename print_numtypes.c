#include<stdio.h>
void main()
{
    int num[10],i,pos=0,neg=0,odd=0,even=0;
    printf("\n Enter the elements of the array:");
    for(i=0;i<=9;i++)
    scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
    {
    num[i]<0?neg++:(pos++);
    num[i]%2?even++:(odd++);
    }
    printf("\n negative number is %d",neg);
    printf("\n positive number is %d",pos);
    printf("\n odd number is %d",odd);
    printf("\n even number is %d",even);

}