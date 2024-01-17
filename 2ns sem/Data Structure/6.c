// #include <stdio.h>
// int li(int *ar, int n, int se)
// {
//     int i = -1, c = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (ar[i] == se)
//         c = i;
//     }
//     return c;
// }
// int main()
// {
//     int n, i, t;
//     scanf("%d", &n);
//     int a[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int se;
//     scanf("%d", &se);
//     t = li(a, n, se);
//     printf("%d", t);
//     return 0;
// }

#include<stdio.h>
int self(int a)
{
    int t=a,i;
    while(a!=0)
    {i=a%10;
        if(t%i!=0)
        return 0;
        a/=10;
    }
    return 1;
}
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(self(i))
        printf("%d ",i);
    }
    return 0;
}