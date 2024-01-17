// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n],i,j;
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             if(a[i]==a[j])
//             break;
//         }
//         if(i==j)
//         printf("%d ",a[i]);
//     }
// }

// rotation 
#include<stdio.h>
void rot(int *a,int k,int p)
{
    int t=0,i,m,l;
    k=p-k;
    while(k--)
    {t=a[0];
        for(i=0;i<p-1;i++)
        {
            a[i]=a[i+1];
        }
        a[p-1]=t;
    }
}
int main()
{
    int n,a[100],b,c,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&b,&c);
        for(i=0;i<b;i++)
        scanf("%d",&a[i]);
        rot(a,c,b);
        for(i=0;i<b;i++)
        printf("%d ",a[i]);
        // if(n>0)
        printf("\n");
    }
}