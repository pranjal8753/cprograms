#include<stdio.h>
#include<math.h>
main()
{
int x,n,r;
printf("ENTER THE NO. AND ITS POWER\n");
scanf("%d%d",&x,&n);
r=pow (x,n);
printf("%d",r);
}
int pow (int x,int n)
{
int i,r=1;
for(i=0;i<n;i++)
r=r*x;
return r;
}
