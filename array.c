#include<stdio.h>
void main()
{
 char n[20];
 int i,j;
 printf("Enter the name:");
 scanf("%s",&n);
 printf("alpha.....order");
 for(i='a';i<='z';i++)
 for(j=0;n[j]!=0;j++)
    if(n[j]==i)
        printf("\n %c",n[j]);   
}