#include<stdio.h>
int main()
{
    int num,count,sum=0;
    printf("Enter a positive integer");
    scanf("%d",&num);
    for(count=1;count<=num;count++)
    {
        sum+=count;
    }
    printf("the sum=%d",sum);
    return 0;
}