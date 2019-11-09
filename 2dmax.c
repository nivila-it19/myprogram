#include <stdio.h>
void main() {
  int a[3][3],i,j,max;
  printf("enter 9 numbers");
  for(i=0;i<=3;i++)
  {
      for(j=0;j<=3;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  max=a[0][0];
  for(i=0;i<=3;i++)
  {
      for(j=0;j<=3;j++)
      {
          if(a[i][j]>max)
          {
              max=a[i][j];
          }
      }
  }
  printf("max is %d",max);
}
