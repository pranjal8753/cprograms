#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
void push(int item,int *f,int q[]);
int pop (int *f,int q[]);
void display(int f,int q[]);
void main()
{
	
	int choice,item,f=-1,q[SIZE];
	for(;;)
	{	
	printf("1.push\t2.pop\t3.display\t4.exit\nENTER THE CHOICE:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	printf("ENTER THE ITEMS\n");
		        scanf("%d",&item);
		        push(item,&f,q);
		        break;
                case 2: item = pop(&f,q);
		        printf("element poped is %d",item);
                        f--;
			break;
		case 3: display(f,q);
		        break;
		case 4: exit(0);

	}
}
}
void push(int item,int *f,int q[])
{
	if(*f==SIZE-1)
	{
		printf("STACK FULL\n");
		return;
	}
        q[++(*f)]=item;
}
int pop(int *f,int q[])
{
	int item;	
	if(*f==-1)
	{
		printf("STACK IS EMPTY\n");
		return 0;
	}
         item=q[*f--];
	return item;

}
void display(int f,int q[])
{
	int i;
	for(i=0;i<=f;i++)
	{

          printf("items are:%d\n",q[i]);
          printf("\n");
	}
	
}
