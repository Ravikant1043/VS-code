#include<stdio.h>
int main()
{
    int n,i,t=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {t=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                t++;
            }
        }
        if(t==0)
        printf("%d ",a[i]);
    }
    return 0;
}