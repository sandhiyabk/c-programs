#include<stdio.h>
#define colmax 10
#define rowmax 12
void main()
{
    int row,column,y;
    row=1;
    printf("multiplication table");
    printf("\n.................\n");
    do
    {
        column=1;
        do
        {
            y=row*column;
            printf("%4d",y);
            column+=1;
        }
        while(column<colmax);
        printf("\n");
        row+=1;
    }
    while(row<rowmax);
    printf("\n.................\n");
}