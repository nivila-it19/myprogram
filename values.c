#include <stdio.h>
void main ()
{
int i,sum,low,high;
printf("enter  the numbers");
scanf("%d%d",&low,&high);
for(i=low;i<=high;i++)
{
sum+=i;
printf("%d",sum);
}
}

