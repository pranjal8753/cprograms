#include<stdio.h>
main()
{
int x,i=0,l=0,p=1;
char a[100];
printf("ENTER THE STRING\n");
scanf("%s",&a);
while(a[i]!='\0')
{
i++;
l++;
}
for(x=0;x<l/2;x++)
{
if(a[x]!=a[l-1-x])
p=0;
}
if(p)
printf("PALLINDROME\n");
else
printf("NOT A PALLINDROME\n");
}
