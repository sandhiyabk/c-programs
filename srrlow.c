#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    if(fgets(s,sizeof(s),stdin)!=NULL)
    {
        s[strcspn(s,"\n")]='\0';
        printf("%s",strlwr(s));
    }
    else{
        printf("Error");
    } 
    return 0;
}