#include<stdio.h>
main()
{
int i=0;
char a[10];
char b,c;
printf("ENTER THE CHARACTER\n");
for(i=0;i<3;i++)
{
scanf("%c",&a[i]);
}
b=a[0];
c=a[2];
while(b<=c)
{
printf("%c\t:%d\n",b,b);
b++;
}
}
