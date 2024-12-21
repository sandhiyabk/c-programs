#include<stdio.h>
void main()
{
    struct emp
    {
        char name[30];
        int rollno;
        int bs;
    };
    struct emp e1;
    printf("Enter the name:");
    scanf("%s",&e1.name);
    printf("Enter the basic salary:");
    scanf("%d",&e1.bs);
    printf("Enter the rollno:");
    scanf("%d",&e1.rollno);
    printf("The name of employee is %s and his/her rollno is %d.then his/her basic salary is %d",e1.name,e1.rollno,e1.bs);
}
    
