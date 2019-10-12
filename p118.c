#include<stdio.h>
struct student
{
char name;
int roll;
float marks;
}s[10];
void main()
{
int i,n;
printf("enter the no. of student\n");
scanf("%d",&n);
printf("enter the details of students\n");
for(i=0;i<n;i++)
{
printf("enter the student name\n");
scanf("%s",s[i].name);
printf("enter the student roll no.\n");
scanf("%d",&s[i].roll);
printf("enter the student marks\n");
scanf("%f",&s[i].marks);
}
printf("the students details are\n");
for(i=0;i<n;i++)
printf("student name is %s\n",s[i].name);
printf("student roll is %d\n",s[i].roll);
printf("student marks is %f\n",s[i].marks);
}

