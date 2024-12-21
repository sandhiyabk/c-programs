#include<stdio.h>
void main()
{
    int a=20;
    if(a%5==0)
    {
        if(a%10==0)
        {
            printf("the number is divided by both");
        }
        else
        {
            printf("the number is only divided by 5");
        }
    }
    else
    {
        printf("the number cannot divided by both 5 and 10");
    }
}