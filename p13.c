#include<stdio.h>
main()
{
float a[100],sum=0,avg;
int n,i=0;
printf("enter the no of elements that should be taken\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<=n;i++)
{
scanf("%f",&a[i]);
sum=sum+a[i];
avg=sum/n;
}
printf("sum\t:%f\n",sum);
printf("avg\t:%f\n",avg);
printf("the deviation of each elements\n");
for(i=0;i<=n;i++)
{
printf("DEVIATION\t:%f\n",a[i]-avg);
}
}
