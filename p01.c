#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 5
void push(int item,int *top,int s[]);
void pop(int *top,int s[]);
void display(int top,int s[]);
main()
{
for(;;)
{
int top=-1,item=0,s[100],choice;
	printf("ENTER YOUR CHOICE 1.push\t2.pop\t3.display\t4.exit\n");
        scanf("%d",&choice);
        switch(choice)
	{
	case 1:printf("enter the items\n");
               scanf("%d",&item);
               push(item,&top,s);
	       break;
        case 2:pop(&top,s);
               printf("elements poped is %d\n",item);
	       break;
        case 3:display(top,s);
	       break;
        case 4:exit(0);
	}
}
}
void push(int item,int *top,int s[])
    {
	    if(*(top)==STACKSIZE -1)
            {
            printf("stack full\n");
            return;
            }
            s[++*(top)]=item;
    }
void pop(int *top,int s[])
{
	      int item;
	      
	              if(*(top)==-1)
		      {
			printf("empty stack\n");
		      }
	             else
	              s[*(top)--]=item;
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
	{	
	printf("%d",s[i]);
        printf("\n");
	}	
}		     
