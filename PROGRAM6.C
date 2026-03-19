#include<stdio.h>
#include<conio.h>
void main()
{ int var[]={100,200,300};
int i,*ptr[3];
clrscr();
for (i=0;i<3;i++)
{ptr[i] = &var[i];}
for (i=0;i<3;i++)
{printf("value of var[%d]=%d\n",i,*ptr[i]);
}
getch();
}
