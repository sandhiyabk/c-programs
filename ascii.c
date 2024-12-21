#include<stdio.h>
void main()
{
    char c;
    for(c=65;c<122;c++)
    {
        if(c>90&&c<97)//it declares the number in ascii values
        continue;
        printf("%c",c);
        
    }
}