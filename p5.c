#include<stdio.h>
main()
{
int n,i=2,sum=0;
printf("ENTER THE NO. TILL WHERE THE SUM HAS TO BE TAKEN\n");
scanf("%d",&n);
for(i=2;i<=n;i=i+3)
{
sum=sum+i;
}
printf("sum\t=%d",sum);
}
