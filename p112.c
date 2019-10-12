#include<stdio.h>
#include<stdlib.h>
#define size 3
void push(int item,int s[],int *f);
int pop(int s[],int *f);
void display(int f,int s[]);
int main(void)
{
int f=-1,s[size],item,ch;
for(;;)
{
printf("ENTER THE CHOICE\n1.PUSH\t2.POP\t3.DISPLAY\tEXIT\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("ENTER THE ITEMS\n");
       scanf("%d",&item);
       push(item,s,&f);
       break;
case 2:item=pop(s,&f);
       printf("item popped = %d",item);
       break;
case 3:display(f,s);
       break;
case 4:exit(0);
       break;
}
}
}
void push(int item,int s[],int *f)
{
if(*f==size-1)
{
printf("stack full\n");
return;
}
{
s[++(*f)]=item;
}
}
int pop(int s[],int *f)  	
{
int item;
if(*f==-1)
{
printf("stack empty\n");
return 0;
}
item=s[*(f)];
(*f)--;
return item;
}
void display(int f,int s[])
{
int i;
if(f==-1)
{
printf("stack empty\n");
return;
}
for(i=0;i<=f;i++)
printf("%d",s[i]);
printf("\n");
}
