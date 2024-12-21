#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    printf("Enter the name:");
    scanf("%s",&name);
    printf("The lower case of this strig is: %s",strlwr(name));
}