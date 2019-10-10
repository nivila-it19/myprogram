
#include <stdio.h>
void main()
{
int a[5]={1,2,3,4,5};
a[0]=a[1];
a[1]=a[2];
a[2]=a[3];
a[3]=a[4];
a[4]=a[5];
a[5]=a[0];
printf("%d",a[5]);
}

