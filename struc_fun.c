#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
};
void main()
{
    struct student s={"sandy",23 };
    printf("the name %s and rollno %d",s.name,s.rollno);
}