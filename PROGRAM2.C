#include <conio.h>
#include <stdio.h>
//define structure
typedef struct student      //typedef in starting
{
int rollno;
char name[20];
char department[40];
int year_of_joining;
float score;
}abc;                 //name of typedef abc
void main()
{
abc s;  //declare structure variable   //write  the abc here instead of struct student

//input data
printf("Enter roll number:");
scanf("%d",&s.rollno);
printf("Enter name:");
scanf("%s[^\n]",&s.name); //to read full name with spaces
printf("Enter department:");
scanf("%s[^\n]",&s.department);
printf("Enter the year of joining:");
scanf("%d",&s.year_of_joining);
printf("Enter the score:");
scanf("%f",&s.score);
//display data
printf("\n----STUDENT DETAILS----\n");
printf("Roll number:%d\n",s.rollno);
printf("Name:%s\n",s.name);
printf("Department:%s\n",s.department);
printf("Year of joining:%d\n",s.year_of_joining);
printf("Score:%.2f\n",s.score);
getch();

}
