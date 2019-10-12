#include<stdio.h>
#define SIZE 3
void push(int item,int *f,int q[]);
int pop(int item,int *f,int q[]);
void display(int f,int q[]);
main()
{
	int item,choice,q[SIZE],f=-1;
	    for(;;)
	    {

	      printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\nENTER THE CHOICE\n");
	      scanf("%d",&choice);
	      switch(choice)
	      {
		      case 1:printf("enter the items\n");
			     scanf("%d",&item);
			     push(item,&f,q);
			     break;
		      case 2:item=pop(item,&f,q);
			     break;
		      case 3:display(f,q)
		             break
		      case 4:exit(0);
		             break;
	      }
	    }
}
void push(int item,int *f,int q[])
{
	if(*f==SIZE-1)
	{
		printf("STACK IS FULL\n");
	}
	else
	{
		item=q[++(*f)];
	}
}



