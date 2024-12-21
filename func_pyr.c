#include<stdio.h>
int printline();
void main()
{
    int x;
    x=printline();
}
int printline()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}