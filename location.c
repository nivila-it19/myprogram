#include <stdio.h>
void main() {
    int a[]={1,2,3,4,5},n,i,flag=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=4;i++)
    {
        if(a[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("number is not present ");
    }
    else
    {
        printf("number is present in location %d",i);
    }
}

