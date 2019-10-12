#include<stdio.h>
main()
{
int a[20][20],b[20][20],res[20][20];
int c,d,e,f,i,j,k,sum=0;
printf("ENTER THE NO. OF ROWS AND COLOUMS OF ARRAY A\n");
scanf("%d%d",&c,&d);
printf("ENTER THE ELEMENTS OF ARRAY A\n");
for(i=0;i<c;i++)
{
for(j=0;j<d;j++)
scanf("%d",&a[i][j]);
}
printf("ENTER THE ROWS AND COLOUMNS OF ARRAY B\n");
scanf("%d%d",&e,&f);
printf("ENTER THE ELEMENTS OF ARRAY B\n");
for(i=0;i<e;i++)
{
for(j=0;j<f;j++)
{
scanf("%d",&b[i][j]);
}
}
if(c!=d)
{
printf("multiplication not possible\n");
}
for(i=0;i<c;i++)
{
for(j=0;j<f;j++)
{
for(k=0;k<e;k++)
{
sum=sum+a[i][k]*b[k][j];
}
res[i][j]=sum;
sum=0;
}
}
printf("product of matrix =\n");
for(i=0;i<c;i++)
{
for(j=0;j<d;j++)
{
printf("%d\t",res[i][j]);
}
printf("\n");
}
}
