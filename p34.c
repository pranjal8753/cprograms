#include<stdio.h>
int add(int,int);
main()
{
int x,y,s;
printf("ENTER THE NUMBERS\n");
scanf("%d%d",&x,&y);
s=add(x,y);
printf("SUM=%d",s);
}
int add(int a,int b)
{
int c;
c=a+b;
return (c);
}


