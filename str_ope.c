#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    if(fgets(s,sizeof(s),stdin)!=NULL)
    {
        s[strcspn(s,"\n")]='\0';
        memset(s,'*',4);
        printf("%s",s);
    }
    else{
        printf("Error");
    } 
    return 0;
}