#include<stdio.h>
int main()
{
    int i,a[10],max1,max2;
    printf("Enter the numbers.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
    max2=a[1];
    for(i=0;i<10;i++)
    {
       if(a[i]>max1)
       {
        max2=max1;
        max1=a[i];
       }
       else
        if(a[i]<max1 && a[i]>max2)
         max2=a[i];
    }
    printf("Second largest number = %d\n",max2);
   return 0;
}




