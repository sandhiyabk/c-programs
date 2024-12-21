#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    printf("Enter the name:");
    scanf("%s",&name);
    strrev(name);
    printf("\n the reverse string is %s",name);
}