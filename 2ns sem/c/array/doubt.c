// storing frequency

#include<stdio.h>
int main()
{
    int n,i,j,c,l;
    scanf("%d",&n);
    int a[n],p[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {c++;
            p[i]=c;
                l=c;
            }
        }
    }
      while(l!=0)
        {
            for(i=0;i<n;i++)
            {
                if(p[i]==l)
                printf("%d ",p[i]);
            }
            l--;
        }
    return 0;
}


#include<stdio.h>
int main()
{
    int n,k=-1,i,j,y=0;
    scanf("%d",&n);
    int a[n],l[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]!=a[i]&&i!=j)
            {
                l[y]=a[i];
                y++;
            }
        }
    }
    for(i=0;i<y;i++)
    {
        for(j=0;j<y;j++)
        {
            if(p[j]<p[i])
            k=p[j];
        }
    }
    printf("%d",k);
    return 0;
}