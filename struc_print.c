#include<stdio.h>
void main()
{
    struct stu
    {
        char name[30];
        int rollno;
        int m1,m2,m3,tot,avg;
    };
    struct stu s1;
    printf("Enter the name:");
    scanf("%s",&s1.name);
    printf("Enter the rollno:");
    scanf("%d",&s1.rollno);
    printf("Enter the marks:");
    scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
    s1.tot=s1.m1+s1.m2+s1.m3;
    s1.avg=s1.tot/3;
    printf("The name of student is %s and his/her rollno is %d.then his/her total and average is %d and %d",s1.name,s1.rollno,s1.tot,s1.avg);
}
    
