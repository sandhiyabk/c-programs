#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    if(fgets(s,sizeof(s),stdin)!=NULL)
    {
        printf("%s",s);
    }
    else{
        printf("Error reading input:");
    }
    return 0;
}