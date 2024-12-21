#include<stdio.h>
#include<string.h>
void main()
{
    int m1,m2,m3,tot;
    float avg;
    char name[20],res[20],cls[20];
    printf("Enter stuent name");
    scanf("%s",&name);
    printf("Enter your marks");
    scanf("%d%d%d",&m1,&m2,&m3);
    tot=m1+m2+m3;
    avg=tot/3;
    if(m1>40&&m2>40&&m3>40)
    {
        strcpy(res,"pass");
        if(avg>=80)
        strcpy(cls,"first class");
        else if(avg>=60)
        strcpy(cls,"second class");
        else
        strcpy(cls,"third class");
    }
    else
    strcpy(res,"fail");
    printf("Studdent mark statement \n");
    printf("*****\n\n");
    printf("name=%s \n",name);
    printf("mark1=%d \n",m1);
    printf("mark2=%d \n",m2);
    printf("mark3=%d \n",m3);
    printf("total=%d \n",tot);
    printf("average=%.2f \n",avg);
    printf("result=%s \n",res);
    printf("class=%s \n",cls);

}