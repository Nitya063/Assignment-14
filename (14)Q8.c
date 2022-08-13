#include<stdio.h>
int main()
{
    int i,a[10],min1,min2;
    printf("Enter the numbers.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    min1=a[0];
    min2=a[1];
    for(i=0;i<10;i++)
    {
       if(a[i]<min1)
       {
        min2=min1;
        min1=a[i];
       }
       else
        if(a[i]>min1 && a[i]<min2)
         min2=a[i];
    }
    printf("Second smallest number = %d\n",min2);
   return 0;
}





