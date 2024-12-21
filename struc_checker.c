#include<stdio.h>
struct cls
{
    int number;
    char name[30];
    int marks;
};
void main()
{
    int x;
    struct cls student1={23,"sandy",99};
    struct cls student2;
    student2=student1;
    x=((student2.number==student1.number)&&(student2.name==student1.name)&&(student2.marks==student1.marks)?1:0);
    if(x==1)
    {
        printf("Both are same");
    }
    else
    {
        printf("Both are not same");
    }
}