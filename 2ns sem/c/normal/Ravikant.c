#include <stdio.h>
int main()
{
   int i, multiply=1, n;
   printf("Enter the no till u want the multiple:");
   scanf(" %d",&n);
   for(i=1;i<=n;i++)
   {
      multiply*=i;
   }
   printf("%d",multiply);
   return 0;

   //sum=0;
   // for(i=0;i<=n;i++)
   // {sum=sum+i;}
   //printf("%d ",sum);
}
