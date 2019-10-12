#include<stdio.h>
main()
{
int a[20];
int i,j,n;
printf("ENTER THE SIZE OF ARRAY\n");
scanf("%d",&n);
printf("ENTER THE ELEMENTS OF ARRAY\n");
for(i=0;i<n;i++);
{
for(j=0;j<n;j++);
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++);
{
for(j=0;j<n;j++);
{
printf("%d\t",&a[j][i]);
}
printf("\n");
}
}
