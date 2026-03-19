#include<stdio.h>
#include<conio.h>
void main()
{ char str[]="Hello";
 char *pstr;

pstr=str;
printf("\n the string is");
while (*pstr!='\0')
{
printf("%c",*pstr);
pstr++;
}
getch();
}
