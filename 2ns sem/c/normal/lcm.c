#include<stdio.h>
int main()
{
    int i,n,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(1)
    {
        for(i=0;i<n;i++)
        {
            if(i+1%a[i]==0)
            k++;
            if(k==n)
            {
                printf("%d",i);
                return 0;
            }
        }
    }return 0;
}