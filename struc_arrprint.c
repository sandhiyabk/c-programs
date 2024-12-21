#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
}s[3];
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
    printf("Enter name and rollno:");
    scanf("%s %d",&s[i].name,&s[i].rollno);
    }
    for(i=0;i<3;i++)
    {
    printf("\nthe name is %s and rollno is %d:\n",s[i].name,s[i].rollno);
    }
    return 0;
    
}