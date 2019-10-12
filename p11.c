#include<stdio.h>
main()
{
float a[20];
float sum=0.0,avg;
int n,i;
printf("ENTER THE NO. TILL WHERE THE SUM HAS TO BE TAKEN\n");
scanf("%d",&n);
printf("ENTER THE NUMBERS");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
sum=sum+a[i];
avg=sum/n;
}
printf("sum=%f",sum);
printf("avg=%f",avg);
printf("THE DEVIATION OF THE NUMBERS:\t");
for(i=0;i<n;i++)
{
printf("deviation is %f",a[i]-avg);
}
}

