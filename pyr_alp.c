#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'a'-1+i);//in this 'a''-1 represents the alphabet and +i represents how many times to print
        }
        printf("\n");
    }
    return 0;
}