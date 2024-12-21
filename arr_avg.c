#include<stdio.h>
void main()
{
    char name[3][10];
    int a[3],b[3],c[3],tot[3],avg[3],i;
    for(i=0;i<3;i++)
    {
    printf("Enter the name:");
    scanf("%s",&name[i]);
    printf("Enter the marks:");
    scanf("%d%d%d",&a[i],&b[i],&c[i]);
    tot[i]=a[i]+b[i]+c[i];
    avg[i]=tot[i]/3;
    printf("%s\t mark1 is %d \t mark2 is %d \t mark3 is %d \t total is %d \n average is %d \n",name[i],a[i],b[i],c[i],tot[i],avg[i]);
    }
}