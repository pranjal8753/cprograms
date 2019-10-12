#include<stdio.h>
unsigned strlen(char *s);
main()
{
char s[20];
printf("ENTER THE STRING\n");
scanf("%s",s);
printf("%u",strlen(s));
return 0;
}
unsigned strlen(char *s)
{
int len;
while(*(strlen)!='\0')
len++;
return len;
}




