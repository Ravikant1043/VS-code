#include<stdio.h>
int main()
{
    int a,j,n=0;
    scanf("%d",&a);
    for(j=1;j<a;j++)
    {
        if(a%j==0)
        {
            for(int k=1;k<=j;k++)
            {
                if(j%k==0)
                n++;
                if(n==2)
                {
                    printf("%d ",j);
                    printf("%d",a/j);
                    return 0;
                }
            }
        }
    }
    printf("-1");
    return 0;
}