// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n],i,o,c=0,p;
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//     {
//         if(a[i]%2!=0)
//         break;
//     }
//     o=i;
//     for(i=n-1;i>=0;i--)
//     {
//         if(a[i]%2!=0)
//         break;
//     }
//     p=i;
//     for(i=o+1;i<p;i++)
//     {
//         if(a[i]%2!=0)
//         c++;
//     }
//     printf("%d",c);
// }


// to remove duplicates from the array 
// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<n-1;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(a[i]==a[j] && a[i+1]!=a[i+2])
//             printf("%d ",a[i]);
//         }
//     }
// }

#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    for (i=2;i<=ceil(sqrt(n));i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n)==1)
    {
        while(n)
        {
            if(prime(n%10)!=1)
            {
                printf("Not Mega Prime");
                return 0;
            }
            n/=10;
        }
        printf("Mega Prime");
    }
    else
    printf("Not Mega Prime");
}