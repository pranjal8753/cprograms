#include<stdio.h>
#include<stdlib.h>
#define size 20
void insert(int q[],int *f, int *r,int item);
int deleteQ(int q[],int *f,int item,int *r);
void display(int q[],int f,int r);
int main()
{
int q[size], ch,item,f=-1,r=-1;
while(1){
printf("enter choice\n1.insert\t2.delete\t3.display\t4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the item\n");
       scanf("%d",&item);
       insert(q,&f,&r,item);
       break;
case 2:item=deleteQ(q,&f,item,&r);
       printf("the deleted item is %d\n",item);
       break;
case 3:display(q,f,r);
       break;
case 4:return 0;
}
}
}
void insert(int q[],int *f, int *r,int item)
{
if(*r==size-1)
{
printf("queue full\n");
}
else if(*r == -1 && *f == -1){
*(f) = 0;
}
(*r)++;
q[*r] = item;
}
int deleteQ(int q[],int *f,int item,int *r)
{
if(*r==-1)
{
printf("queue empty\n");
return 0;
}
item=q[*f];
++*(f);
return item;
}
void display(int q[],int f,int r)
{
int i;
if(r==-1)
{
printf("queue empty\n");
}
for(i=f;i<=r;i++){
    printf("%d",q[i]);
}
}
