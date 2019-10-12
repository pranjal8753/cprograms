#include<stdio.h>
#define PI 3.14
main()
{
char ch;
int l,b,r;
float area;
printf("ENTER THE CHARACTER\n");
scanf("%c",&ch);
if(ch=='C'||ch=='c')
{
printf("ENTER THE RADIUS\t:");
scanf("%d",&r);
area=PI*r*r;
printf("area\t:%f\n",area);
}
else if(ch=='R'||ch=='r')
{
printf("ENTER THE LENGTH\t:");
scanf("%d",&l);
printf("ENTER THE BREADTH\t:");
scanf("%d",&b);
area=l*b;
printf("area\t=%f\n",area);
}
else if(ch=='S'||ch=='s')
{
printf("ENTER THE LENGTH\t:");
scanf("%d",&l);
area=l*l;
printf("area\t=%f\n",area);
}
else 
{
printf("INVALID");
}
}
