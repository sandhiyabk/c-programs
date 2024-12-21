#include<stdio.h>
#include<string.h>
void main()
{
    char name[30];
    int a;
    printf("Enter your name");
    scanf("%s",&name);
    a=strlen(name);
    printf("\n the length of string %d",a);
}