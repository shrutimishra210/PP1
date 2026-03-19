#include<conio.h>
#include<stdio.h>
float(*fptr)(float,float );
float add(float x,float y)
{return(x+y);}
float sub(float x,float y)
{return(x-y);}

void main()
{
clrscr();
fptr=add;
printf("add is %f\n",fptr(2,3));
fptr=sub;
printf("sub is %f",fptr(4,2));
getch();

};
