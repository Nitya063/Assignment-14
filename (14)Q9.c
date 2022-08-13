#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the limit.\n");
    scanf("%d",&n);
    int a[n];
     printf("Enter %d no.s\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
       printf("%d\n",a[i]);
    }
   return 0;
}






