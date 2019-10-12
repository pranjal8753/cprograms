#include<stdio.h>
float power(float x,int n);
main()
{
int n1;
float x1,r;
printf("ENTER THE NO. AND THE POWER\n");
scanf("%f%d",&x1,&n1);
r=power(x1,n1);
printf("%f",r);
}
float power(float x,int n)
{
int i;
float res=1;
for(i=0;i<n;i++)
{
res=res*x;
}
return (res);
}
