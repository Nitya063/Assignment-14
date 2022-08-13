#include<stdio.h>
int main()
{
    int i,j,a[10],temp;
    printf("Enter the numbers.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
      for(j=0;j<9;j++)
       {
         if(a[j]>a[j+1])
         {
             temp=a[j+1];
             a[j+1]=a[j];
             a[j]=temp;
         }
       }
    }
    for(i=0;i<10;i++)
    {
       printf("%d\n",a[i]);
    }
   return 0;
}





