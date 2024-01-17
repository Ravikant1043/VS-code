#include<stdio.h>
int main()
{
    int a,n,count =0,k;
    scanf("%d",&a);
    count =0;
            for(n=1;n<=a;n++)
            {
                if(a%n==0)
                count++;
            }
            if(count==2)
            {printf("%d",a);
            return 0;}
}