#include<stdio.h>
int main()
{
    int i,a[10],se=0,so=0;
    printf("Enter the numbers.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
       if(a[i]%2==0)
        se=se+a[i];
       else
        so=so+a[i];
    }
    printf("Sum of all odd numbers = %d\n",so);
    printf("Sum of all even numbers = %d",se);
   return 0;
}


