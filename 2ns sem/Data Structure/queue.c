// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n], b, c, d = 0, i, j;
//     for (i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     scanf("%d%d", &b, &c);
//     if (b > c)
//     {
//         j = b;
//         b = c;
//         c = j;
//     }
//     for (i = 0; i < n; i++)
//     {
//         if (b < a[i] && a[i] < c)
//         {
//             // printf("%d ", a[i]);
//             d++;
//         }
//     }
//     if (d == 0)
//         printf("-1");
//     printf("%d", d);
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if(n==1)
    return 0;
    if (n==2)
    return 1;
    for(i=2;i<pow(n,0.5)+1;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max=a[0],min=a[0],d=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        else if(a[i]<min)
        min=a[i];
    }
    // printf("%d %d",max,min);
    for(i=0;i<n;i++)
    {
        if(a[i]>=min && a[i]<=max &&prime(a[i])==1)
        d++;
    }
printf("%d",d);
return 0;
}