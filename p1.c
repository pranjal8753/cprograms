#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void insert(int item,int q[],int *r);
int delete(int item,int q[],int *f,int *r);
void display(int q[],int f,int r);
int  main()
{
	int item,choice,f=-1,r=-1,q[SIZE];
	for(;;)
	{
		printf("1.INSERT\t2.DELETE\t3.DISPLAY\t4.EXIT\nENTER YOUR CHOICE\n\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nenter the items\n");
			       scanf("%d",&item);
			       insert(item,q,&r);
			       break;
			case 2:item=delete(item,q,&f,&r);
                               printf("the deleted item is %d\n",item);
			       break;
			case 3:display(q,f,r);
			       break;
			default:exit(0);
		}
	}

}
void insert(int item,int q[],int *r)
{
	if(*r==SIZE-1)
	{
		printf("THE QUEUE IS FULL\n");
	}
	else
	{
		item=q[++*r];
	}
}
int  delete(int item,int q[],int *f,int *r)
{
	if((*r==-1&&*f==-1)||*f>*r)
	{
		printf("queue is empty\n");
                return 0;
	}
	else
	{
          item=q[++*f];
	  return item;
	}
}
void display(int q[],int f,int r)
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("the element in queue are:%d\n",q[i]);
	}
})
