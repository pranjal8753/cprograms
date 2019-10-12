#include<stdio.h>
main()
{
char a[10];
char ch,ch1;
int i=0;
printf("ENTER THE CHARACTER\n");
for(i=0;i<3;i++)
{
scanf("%c",&a[i]);
}
ch=a[0];
ch1=a[2];
while(ch<=ch1)
{
printf("%c : %d",ch,ch);
ch++;
}
}
