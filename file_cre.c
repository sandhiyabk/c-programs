#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("newfile.c","w");
    if(fp==NULL){
    printf("there is an issue to create");
    return 1;
    }
    fprintf(fp,"hello");
    fflush(fp);
    fclose(fp);
    return 0;
}