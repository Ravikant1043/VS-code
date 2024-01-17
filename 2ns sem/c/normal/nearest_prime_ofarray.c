#include<stdio.h>
int main()
{
    int a,n,i,j,k;
    int count=0;
    scanf("%d",&n);
    int r[n],u[n],q[n],o=0,p=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=r[i];;j++)
        {
            count=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                count++;
            }
            if(count==2)
            {
               u[o]=j;
               o++;
                break;
            }
        }
        for(j=r[i];j>0;j--)
        {
            count=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                count++;
            }
            if(count==2)
            {
               q[p]=j;p++;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(u[i]>=q[i])
        printf("%d\n",q[i]);
        else 
        printf("%d\n",u[i]);
    }
    return 0;
}