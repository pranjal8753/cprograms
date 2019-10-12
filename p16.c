#include<stdio.h>
main()
{
char a[5];
int i=0;
for(i=0;i<5;i++)
{
scanf("%c",&a[i]);
}
if(a[0]>='a'&&a[0]<='z')
{
a[0]=a[0]-('a'-'A');
}
for(i=0;i<5;i++)
{
printf("%c",a[i]);
}
}
