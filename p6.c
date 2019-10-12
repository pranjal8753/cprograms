#include<stdio.h>
main()
{
int x,i=0,l=0,p=1;
char str[100];
printf("ENTER THE STRING\n");
scanf("%s",str);
while(str[i]!='\0')
{
i++;
l++;
}
for(x=0;x<l/2;x++)
{
if(str[x]!=str[l-1-x])
p=0;
}
if(p)
{
printf("pali\n");
}
else
{
printf("not a pali\n");
}
}

