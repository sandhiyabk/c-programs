#include<stdio.h>
void add(int a[]);
void main()
{
    int i,a[5];
    printf("Before");
    for(i=0;i<5;i++)
    {
        a[i]=i+5;
        printf("a[%d]=%d \n",i,a[i]);
    }
    add(a);
    printf("After");
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
}
    void add(int a[])
    {
        int i;
        printf("From the function:");
        for(i=0;i<5;i++)
        {
            a[i]=i+10;
            printf("a[%d]=%d \n",i,a[i]);
        }

    }


    
