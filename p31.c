#include<stdio.h>
main()
{
add();
iseven();
add();
iseven();
}
add()
{
int a,b,c;
printf("enter the two no.\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum of the no. is %d\n",c);
}
iseven()
{
int a;
printf("ENTER THE NO.\n");
scanf("%d",&a);
if(a%2==0)
{
printf("EVEN\n");
}
else
{
printf("odd\n");
}
}
