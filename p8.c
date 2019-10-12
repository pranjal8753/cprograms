#include<stdio.h>
void fibo(int n);
void main()
{
int n;
printf("NETER THE RANGE OF FIBONACCI SERIES\n");
scanf("%d",&n);
printf("FIBONACCI SERIES-");
printf("%d%d",0,1);
fibo(n-2);
}
void fibo(int n)
{
int first=0,second=1,sum=0;
for(int i=1;i<=n;i++)
{
sum=first+second;
first=second;
second=sum;
printf("%d",sum);
}
}

