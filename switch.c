#include<stdio.h>
void main()
{
    int a;
    printf("enter any choice");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
            printf("good morning");
            break;
        case 2:
            printf("good afternoon");
            break;
        case 3:
            printf("good evening");
            break;
        case 4:
            printf("good night");
            break;
        defult:
            printf("Have a good day");
        
    }
}