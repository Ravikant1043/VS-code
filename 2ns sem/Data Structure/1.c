// #include<stdio.h>
// void fun(int n)
// {
//     if (n==0)
//     return ;
//     fun(n-1);
//     printf("%d ",n);
// }
// int main()
//     {
//         int a;
//         printf("Enter the number");
//         scanf("%d",&a);
//         fun(a);
//         return 0;
//     }
// // recursion function works in a stack memeory if a recursion function is called in a infinite condition then it results its own termination when the stack memory is full
// // interchange of line 6 and 7 can results the numbers in either assending or desending order

// //
// #include<stdio.h>
// int fun(int n)
// {
//     if(n<=0)
//     return 1;
//     fun(n-1);
//     printf("%d",n);
//     return fun(n-2);
// }
// int main()
// {
//     int a,res;
//     printf("Enter the number till u want the sum");
//     scanf("%d",&a);
//     res=fun(a);
//     printf("%d",res);
//     // fun(a);
//     return 0;
// }
//{}

#include<stdio.h>
int rev(int n)
{
    int i,d=0,t;
    t=n;
    while(t!=0)
    {
        i=t%10;
        d=d*10+i;
        t/=10;
    }
    return d;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(1)
    {
        if (n==rev(n))
        break;
        n=n+rev(n);
    }
    printf("%d",n);
    return 0;
}


// primes in a range
#include<stdio.h>
long int prime(long int n)
{
    long int i,c=0;
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        c++;
    }
    if(c==1)
    return 1;
    else
    return 0;
}
int main()
{
    long int a,b,i,c=0;
    scanf("%ld%ld",&a,&b);
    for (i=a;i<b;i++)
    {
        if (prime(i)==1)
        c++;
    }
    printf("%ld",c);
    return 0;
}