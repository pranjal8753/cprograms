#include<stdio.h>
void swap(int *,int *);
main()
{
	int *a,*b,temp;
	printf("enter the no. to be entered\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("after swapping the numbersa=%d,b=%d\n",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	*a=temp;
	*b=*a;
	temp=*b;
}

