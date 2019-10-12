#include<stdio.h>
#define PI 3.14
main()
{
char ch;
float l,b,r;
float area;
printf("ENTER THE SELECTION\n");
scanf("%c",&ch);
if(ch=='S'||ch=='s')
{
printf("ENTER THE LENGHTH OF SIDE\n");
scanf("%f",&l);
area=l*l;
printf("area\t:%f",area);
}
else if(ch=='R'||ch=='r')
{
printf("ENTER THE LENGHTH AND BREADTH OF SIDE\n");
scanf("%f%f",&l,&b);
area=l*b;
printf("area\t:%f",area);
}
else if(ch=='C'||ch=='c')
{
printf("ENTER THE RADIUS OF CIRCLE\n");
scanf("%f",&r);
area=PI*r*r;
printf("area\t:%f",area);
}
}

