#include <stdio.h>
void main()
{
int a[5],i;
printf("enter 5 numbers");
for(i=5;i>=1;i--)
{
  a[i]=a[i-1];
}
}

