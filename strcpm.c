#include<stdio.h>
int strcmp(char *,char *);
main()
{
char a[10],b[10];
int res;
printf("enter the string a\n");
scanf("%s",a);
printf("enter the string b\n");
scanf("%s",b);
res=strcmp(s1,s2);
if(res==0)
{
printf("BOTH STRING ARE EQUAL\n");
else
printf("BOTH STRING ARE NOT EQUAL\n");
return 0;
}
int strcmp(char *str1,char *str2)
{
int len1=0,len2=0;
while(*(str1+len1)!='\0')
len1++;
while(*(str2+len2)!='\0')
len2++;
if(len1==len2)
{
for(i=0;i<len;i++)
if(*(str1+i)!=(*(str2+i))
return -1;
return 0;
}
else 
return -1;
}
