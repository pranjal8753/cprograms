/*addition of two array*/
#include<stdio.h>
main()
{
int a[10][10],b[10][10];
int sum[10][10];
int i,j,n;
printf("ENTER THE SIZE OF ARRAY\n");
scanf("%d",&n);
printf("ENTER THE ELEMENTS OF THE ARRAY A\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
printf("ENTER THE ELEMENTS OF THE ARRAY B\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
sum[i][j]=a[i][j]+b[i][j];
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
printf("sum=%d\t",sum[i][j]);
}
printf("\n");
}
