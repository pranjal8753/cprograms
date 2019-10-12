#include<stdio.h> 
main()
{
int a[50][50];
int i,j,n,sum;
printf("ENTER THE SIZE OF ARRAY\n");
scanf("%d",&n);
printf("ENTER THE ELEMENTS OF ARRAY\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j<=0;j<n;j++)
{
if(i==j)
{
sum=sum+a[i][j];
printf("sum=%d\n",sum);
}
}
}
printf("sum=%d\n",sum);
}
