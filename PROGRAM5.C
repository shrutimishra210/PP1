#include <conio.h>
#include <stdio.h>
 void main()
 {int a[5],i,x,n;
 clrscr();
 printf("how many elements?");
 scanf("%d",&n);
 printf("enter the values of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter element to search");
 scanf("%d",&x);
 for(i=0;i<n;i++){
 if(x==a[i])
   break;}
 if(i<n){
 printf("number is present at index %d",a[i]);}
 else
 {printf("number not found");}
 getch();
 }
