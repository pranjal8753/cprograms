#include<stdio.h>
#include<stdlib.h>
#define stacksize 5
void push(int item,int *top,int s[]);
int pop(int item,int *top,int s[]);
void display(int top,int s[]);
int main(void)
{
int s[10],choice,item,top=-1;
for(;;)
{
printf("enter choice\t");
printf("1.push\t2.pop\t3.display\t4.exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the element to be pushed\t");
       scanf("%d",&item);
       push(item,&top,s);
       break;
case 2:item=pop(item,&top,s);
       if(top==-1)
       printf("stack is empty\n");
       else
       printf("element poped id %d\n",item);
       break;
case 3:display(top,s);
       break;
case 4:exit(0);
}
}
}
void push(int item,int *top,int s[])
{
if(*top==stacksize-1)
{
printf("stack full\n");
return;
}
s[++*(top)]=item;
}
int pop(int item,int *top,int s[])
{
if(*top==-1){
	return 0;
}
item=s[*(top)];
(*top)--;
return item;

}
void display(int top,int s[])
{
int i;
if(top==-1)
{
printf("empty stack\n");
return;
}
printf("stack elements:\n");
for(i=0;i<=top;i++)
printf("%d\t",s[i]);
printf("\n");
}

