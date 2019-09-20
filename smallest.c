#include <stdio.h>
void main()
{
int a,b,c,d;
printf("enter the numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if((a<b)&&(a<c)&&(a<d))
{
printf("smallest number is a");
}
else if(b<a&&b<c&&b<d)
{
printf ("smallest number is b");
}
else if (c<a&&c<b&&c<d)
{
printf ("smallest number is c");
}
else
{
printf ("smallest number is d");
}
}
