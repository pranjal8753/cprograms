#include<stdio.h>
main()
{
int i=0,n,a[10];
float sum=0.00,avg;
printf("ENETR THE SIZE\n");
scanf("%d",&n);
printf("ENTER THE ELEMENTS OF ARRAY\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
avg=sum/n;
}
printf("sum\t:%f\navg\t:%f:",sum,avg);
printf("THE DEVIATION OF THE NUMBERS\n");
for(i=0;i<n;i++)
{
printf("DEVIATION\t:%f\n",a[i]-avg);
}
}

