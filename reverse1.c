#include <stdio.h>
void main()
{
int i,j,a[10],n,b[10];
printf("enter no of values");
scanf("%d",&n);
printf("enter n elements to array");
for(i-0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1,j=0;i>=0,j<=n;i--,j++)
{
b[j]=a[i];
}
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<=n;i++)
{
printf("%d",a[j]);
}
}