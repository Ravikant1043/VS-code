// // octal to binary convertion
// #include<stdio.h>
// #include<math.h>
// unsigned long long convert(int oct);
// int main()
// {
//     int n,i,p;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)                                                                                                                                                                                            
//     {
//         printf("%llu\n",convert(a[i]));
//     }
// }
// unsigned long long convert(int oct) {
//    unsigned long long int dec = 0, bin = 0;
//     int i = 0;
//     while (oct != 0) {
//         dec += (oct % 10) * pow(8, i);
//         ++i;
//         oct /= 10;
//     }
//     i = 1;
//     while (dec != 0) {
//         bin += (dec % 2) * i;
//         dec /= 2;
//         i *= 10;
//     }
//     return bin;
// }


#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,d,p=0,s=0,i=0,j,k=0,x,t;
    scanf("%lld",&t);
    while(t--)
    {
        i=0;p=0;d=0;
        scanf("%lld",&n);
        while(n)
        {
         d=n%10;
         p=p+(d*pow(8,i++));
         n=n/10;   
        }
        i=1;
        s=0;
        while(p)
        {
            s+=(p%2)*i;
            p=p/2;
            i=i*10;
        }
        printf("%lld\n",s);
    }
    return 0;
}