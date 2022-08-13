#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    float avg;
    printf("Enter the numbers.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10;
    printf("Average = %.2f",avg);
   return 0;
}

