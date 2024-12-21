#include<stdio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
    circle(200,350,20);
    arc(100,200,45,270,30);
    putpixer(200,150,WHITE);
    closegraph();
}