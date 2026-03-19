#include<conio.h>
#include<stdio.h>
float(*fptr)(float,float,float );
float si(float p,float r,float t)
{return(p*r*t/100);}


void main()
{
clrscr();
fptr=si;
printf("simple interest is %f\n",fptr(2000,3,5));

getch();

};
