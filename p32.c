#include<stdio.h>
main()
{
fact();
}
fact()
{
int i=1,factorial=1,a;
printf("enter the no. till where the factorial has to be taken\n");
scanf("%d",&a);
do
{
factorial=factorial*i;
i++;
}
while(i<a);
printf("THE FACTORIAL=%d\n",factorial);
}
