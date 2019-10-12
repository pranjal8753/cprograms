#include<stdio.h>
int fib(int n);
main()
{
int i;
for(i=0;i<=5;i++)
{
printf("%d\n",fib(i));
}
}
int fib(int n)
{
int res;
if(n==0) return 0;
if(n==1) return 1;
else
{
res=fib(n-1)+fib(n-2);
return (res);
}
}
