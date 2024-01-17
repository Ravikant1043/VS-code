#include <stdio.h>
// void bin(unsigned n, int k)
// {
//     unsigned i;
//     for (i = 1 << k - 1; i > 0; i = i / 2)
//         (n & i) ? printf("1") : printf("0");
// }
int bin(int n)
{
if (n>1)
bin(n>>1);
printf("%d ",n&1);
}
int main()
{
    int n, i;
    scanf("%d", &n);
    // for (i = 0; i <= (2 * n - 1); i++)
    // {
    //     bin(i);j 
    //     printf("\n");
    // }
    bin(n);
}




// minimum length scale
#include<stdio.h>
int hcf(int a,int b)
{ 
    if (a==1 || b==1)
    {
        return 1;
    }
    if(a==0)
    return b;
    else
    return a;
    if(a>b)
    hcf(a-b,b);
    else
    hcf(a,b-a);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,t;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    t=hcf(a[0],a[1]);
    for(i=2;i<n;i++)
    t=hcf(t,a[i]);
    printf("%d",t);
}



//  Self dividing number
#include<stdio.h>
int self(int a)
{ 
    int n;
    n=a;
    while(a)
    {
        if(n%(a%10)!=0)
        return 0;
        a/=10;
    }
    return 1;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(self(i)==1)
        printf("%d ",i);
    }
}