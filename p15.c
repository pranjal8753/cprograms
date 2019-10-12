#include<stdio.h>
main()
{
char a[100];
char b[50];
char c[50];
int i=0,i1=0,i2=0;
printf("ENTER THE STRING\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(i%2==0)
{
b[i1]=a[i];
i1++;
}
else
{
c[i2]=a[i];
i2++;
}
}
printf("%s\n",b);
printf("%s\n",c);
}

