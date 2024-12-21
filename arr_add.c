#include<stdio.h>
void main()
{
    int i,a[3],b[3],c[3];
    for(i=0;i<3;i++)
    {
        printf("Enter the values:",i);
        scanf("%d",&a[i]);
        printf("Enter the values:",i);
        scanf("%d",&b[i]);

    }
    for(i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
        printf("\n array addition is c[%d] %d",i,c[i]);
    }
    
}    