#include<stdio.h>
#include<math.h>
int main()
{
   int a,i,b,s=0,n=0,j,t=0;
   scanf("%d",&a);
   while (1)
   {
       i=a%10;
       b=i*pow(8,n);
       s+=b;
        n++;
        a/=10;
        if (a==0)
        {
            break;
        }
   }
   for(j=1;s!=0;j=j*10)
   {
       i=s%2;
       s/=2;
       t=t+(i*j);
   }
   printf("%d",t);
   return 0;
}