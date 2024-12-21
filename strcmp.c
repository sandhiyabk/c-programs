#include<stdio.h>
#include<string.h>
void main()
{
    char name1[10],name2[10];
    printf("\n Enter 2 names:");
    scanf("%s%s",name1,name2);
    if((strcmp(name1,name2))==0)
    printf("\n 2 names are equal");
    else
    printf("\n 2 names are not equal");
}