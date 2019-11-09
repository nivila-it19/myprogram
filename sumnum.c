#include <stdio.h>
void main()
{
int n,i,sum=0;
printf("enter the numbers");
scanf("%d",&n);
   while (n != 0)
   {
       sum = sum + n % 10;
       n = n/10;
}
{
printf("%d",sum);
}
   }
