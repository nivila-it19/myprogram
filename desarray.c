#include <stdio.h>
void main() {
   int i,j,n,a[10],b;
   printf("enter the numbers");
   scanf("%d",&n);
   {
   for (i = 0; i < n; i++)
   scanf("%d",&a[i]);
   }
   {
    for (i = 0; i < n; i++)
    {
     for (j = i + 1; j < n; j++)
     {
       if (a[i] < a[j])
       {
             b = a[i];
             a[i] = a[j];
             a[j] = b;
       }
     }
    }
   }
       printf("descending Order:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n",a[i]);
        }
}