#include<stdio.h>
int fib(int n);
int main()
{
int i;
for(i=0;i<6;i++)
{
printf("%d\n",fib(i));
}
return 0;
}
int fib(int n)
{
int result;
if(n==0)return 0;
else if(n==1)return 1;
else
{
result=fib(n-1)+fib(n-2);
return result;
}
}

