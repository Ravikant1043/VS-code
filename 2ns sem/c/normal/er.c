// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// int main()
// {
//     float c,a,b,f;
//     scanf("%f%f",&c,&a);
//     b=sqrt(pow(c,2)+pow(a,2));
//     b/=2;
//     f=sqrt(pow(c,2)-pow(b,2));
//     printf("%.0f",round(atan(b/f)*(180/3.14)));
//     return 0;
// }

#include<stdio.h>
int fac(unsigned long long int a)
{
    if(a==1||a==0)
    return 1;
    else
    return a*fac(a-1);
}
int main()
{
    unsigned long long int n,i;
    scanf("%lld",&n);
    long long int r[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&r[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%llu\n",fac(r[i]));
    }return 0;
}