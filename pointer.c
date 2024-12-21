#include<stdio.h>
void main()
{
    int value=9;
    int *ptr;//it likes a address of the pointer ptr
    ptr=&value;
    printf("\n %d",value);
    printf("\n %d",&value);
    printf("\n %d",ptr);
    printf("\n %d",*ptr);
}