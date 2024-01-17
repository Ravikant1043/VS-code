// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n],i,d=0;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//         d=d*10+a[i];
//     }
//     d++;
//     i=n-1;
//     while(d)
//     {
//         a[i]=d%10;
//         d/=10;
//         i--;
//     }
//     for(i=0;i<n;i++)
//     printf("%d ",a[i]);
// }

// 
#include<stdio.h#include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n],i,j,c=0;
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             if(a[i]==a[j])
//             break;
//         }
//         if(i==j && a[i]%2!=0)
//         c++;
//     }
//     printf("%d",c);
// }>
#include<math.h>
int main()
{
    int i,n,a,b,k=0,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(a<b)
        c=b;
        else
        c=a;
        for (i=0;i<sqrt(c)+1;i++)
        {
            if((int)(pow(i,2))%b==a)
            {
                printf("%d\n",i);
                k=1;
                break;
            }
        }
        if(k==0)
        printf("-1\n");
    }
    return 0;
}