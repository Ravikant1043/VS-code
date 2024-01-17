#include<stdio.h>
#include<math.h>
int main()
{
   int a,i,b,sum=0,n=0;
   printf("Enter the number:");
   scanf("%d",&a);
   while (1)
   {
       i=a%10;
       b=i*pow(8,n);
       sum+=b;
        n++;
        a/=10;
        if (a==0)
        {
            break;
        }
   }
   printf("%d",sum);
   return 0;
}