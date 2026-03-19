#include<conio.h>
#include<stdio.h>
float (*fptr) (float,float);
float area(float r,float PI=22.7)
{ return (PI*r*r);}

void main()
{
clrscr();
float PI=22.7;
fptr=area;
printf("area of the circle is %f\n",fptr(20,PI));

getch();
};
