#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("san.c","w");
    if(fp==NULL)
    printf("There is an issue in opening a file");
    return;
    fprintf(fp,"hello hai");
    fflush(fp);
    fclose(fp);
}