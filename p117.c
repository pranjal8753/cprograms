#include<stdio.h>
#include<math.h>
#include<string.h>
#include<type.h>
float compute(char symbol,float op1,float op2);
int main()
{
float s[20];
float res,op1,op2;
int top;
char postfix[20];
char symbol;
top=-1;
printf("enter a valid postfix expression\n");
scanf("%s",postfix);
for(int i=0;i<strlen(postfix);i++)
{
symbol=postfix[i];
if(isdigit(symbol))
s[++top]=symbol-'o';
else
{
op2=s[top--];
op1=s[top--];
res=compute(symbol,op1,op2);
s[++top]=res;
}
res=s[top--];
printf("the result is %f\n",res);
return 0;
}
}
float compute(char symbol,float op1,float op2)
{
switch(symbol)
{
case '+':return op1+op2;
case '-':return op1-op2;
case '*':return op1*op2;
case '/':return op1/op2;
case '$':
case '^':return pow(op1,op2);
}
}
