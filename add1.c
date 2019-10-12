#include<stdio.h>
main()
{
int a[10][10];
int b[10][10],c[10][10];
int i,j,n;
printf("ENTER THE SIZE OF ARRAY\n");
scanf("%d",&n);
printf("ENTER THE ELEMENTS OF THE ARRAY a\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("ENTER THE SIZE OF ARRAY b\n");
scanf("%d",&n);
printf("ENTER THE ELEMENTS OF ARRAY b\n");
for(i=0;i<n;i++);
{
for(j=0;j<n;j++);
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<0;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("sum=%d\n",c[i][j]);
}
