#include<stdio.h>
main()
{
int fact=1,i=1,n;
printf("ENTER THE NO TILL WHERE THE FACTORIAL HAS TO BE TAKEN\n");
scanf("%d",&n);
do
{
fact=fact*i;
i++;
}
while(i<=n);
printf("FACTORIAL IS\t:%d\n",fact);
}
