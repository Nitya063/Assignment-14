#include<stdio.h>
int main()
{
    int i,j,a[10],b[10];
    printf("Enter 10 no.s\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
      b[i]=a[i];
    }
    for(i=0;i<10;i++)
    {
       printf("%d\n",b[i]);
    }
   return 0;
}







