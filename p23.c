#include<stdio.h>
main()
{
char ch;
printf("ENTER THE CHARACTER\n");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
{
printf("IT IS A LOWER CASE ALPHABET\n");
}
else if(ch>='A'&&ch<='Z')
{
printf("IT IS A UPPER CASE ALPHABET\n");
}
else if(ch>='0'&&ch<='9')
{
printf("IT IS A INTEGER\n");
}
else
{
printf("INVALID\n");
}
} 
