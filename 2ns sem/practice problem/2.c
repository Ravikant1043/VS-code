#include <stdio.h>
int main()
{
    // int n, i, j;
    // scanf("%d", &n);
    // int a[n];
    // for (i = 0; i < n; i++)
    //     scanf("%d", &a[i]);
    // for (i = 0; i < n - 1; i++)
    // {
    //     for (j = i + 1; j < n; j++)
    //     {
    //         if (a[i] == a[j] && a[i + 1] != a[i + 2])
    //             printf("%d ", a[i]);
    //     }
    // }
    int a,b,i,g;
    scanf("%d%d",&a,&b);
    for(i=a;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {g=i;}
    }
    printf("%d",g);
    return 0;
}