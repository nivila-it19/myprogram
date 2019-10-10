#include <stdio.h>
void main()
{
  int a[15], minimum,n,i;
  printf("Enter the numbers \n");
  scanf("%d", &n);
  minimum =a[0];
  for(i=1;i<n;i++)
{
   if(a[i]<minimum)
        {
            minimum = a[i];
        }
         }
   printf("minimum number is : %d",minimum);
}


