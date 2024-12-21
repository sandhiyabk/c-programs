#include<stdio.h>
struct emp
{
    char name[25];
    int age;
};
int main()
{
    struct emp e;
    FILE *p,*q;
    p=fopen("file.c","a");
    if(p==NULL)
    {
        printf("Error for opening file");
        return 1;
    }
    printf("Enter the name and age:");
    scanf("%s%d",e.name,&e.age);
    fprintf(p,"%s%d",e.name,e.age);
    fclose(p);
    q=fopen("file.c","r");
    if(q==NULL)
    {
        printf("Error for opening file");
        return 1;
    }
    while(fscanf(q,"%s%d",e.name,&e.age)!=EOF)
    {
        printf("%s%d \n",e.name,e.age);
    }
    fclose(q);
    return 0;
}