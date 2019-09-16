#include <stdio.h>
void main()
{
int a,b,c;
printf("enter the number");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("after swapping=%d %d",a,b);
}

