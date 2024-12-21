#include<stdio.h>
int main()
{
    FILE *f;
    char *str=("sandy");
    f=fopen("sandyy.c","w");
    if(f==NULL){
    printf("there is an issue to create");
    return 1;
    }
    fprintf(f,"%s",str);
    fflush(f);
    fclose(f);
    return 0;
}