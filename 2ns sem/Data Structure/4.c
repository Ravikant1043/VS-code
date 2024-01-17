#include <stdio.h>
#include <math.h>
// int fun(int n)
// {
//     if(n==1)
//     return 1;
//     else
//     return n*fun(n-1);
// }
// int main()
// {
//     int a,r;
//     scanf("%d",&a);
//     r=fun(a);
//     printf("The factorial of the given number is %d",r);
//     return 0;
// }
// int fun(int a, int k)
// {
//     if (a > 0)
//     {
//         int o = a % 10;
//         return pow(o, k) + fun(a / 10, k);
//     }
//     else
//     return a;
// }
// int main()
// {
//     int n, r, t;
//     printf("ener the number which u want to check the condition");
//     scanf("%d", &n);
//     t = log10(n) + 1;
//     r = fun(n, t);
//     if (r == n)
//         printf("the given number is armstrong");
//     else
//         printf("not an armstrong number");
//     return 0;
// }