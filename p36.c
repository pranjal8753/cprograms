#include<stdio.h>
main()
{
char s[20];
int i;
printf("ENTER THE STRING\n");
gets(s);
puts(&s[0]);
}
