#include<stdio.h>
#include<string.h>
void main()
{
    char name1[20],name2[20];
    printf("Enter the 2 names");
    scanf("%s%s",&name1,&name2);
    printf("\n before concatenation %s%s",name1,name2);
    strcat(name1,name2);
    printf("\n after concatenation:");
    printf("\n name1 %s:\n name2%s:",name1,name2);
    strcpy(name2,name1);
    printf("\n after copy");
    printf("\n name1 %s:\n name2 %s:",name1,name2);
    
    
}