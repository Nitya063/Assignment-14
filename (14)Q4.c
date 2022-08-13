#include<stdio.h>
int main()
{
    int i,a[10],max;
    printf("Enter the numbers.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
       if(a[i]>max)
        max=a[i];
    }
    printf("Greatest number = %d\n",max);
   return 0;
}



