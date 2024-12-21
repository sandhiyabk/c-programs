#include<stdio.h>
void printline(char*,int);
float value(float,float,int);
void main()
{
    float princ,amt,ints;
    int tim;
    printf("Enter the princ,interest and time:");
    scanf("%f%f%d",&princ,&ints,&tim);
    printline("*",52);
    amt=value(princ,ints,tim);
    printf("\n %f\t%f\t%d \t%f \n\n",princ,ints,tim);
    printline("=",52);
}
void printline(char* ch,int len)
{
    int i;
    for(i=1;i<len;i++)
    printf("%c",ch);
}
float value(float p,float i,int n)
{
    float si;
    si=p*i*n/100;
    return si;
}