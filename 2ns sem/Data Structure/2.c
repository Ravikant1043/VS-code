// programe to find the prime number using recursion function

// #include<stdio.h>
// int prime(int n)
// {
//     int i=n,c=0;
//     if(i==0)
//     return c;
//     if(n%i==0)
//     c++;
//     prime(n-1);
//     return c;
// }
// int main()
// {
//     int a,re;
//     printf("Enter the number");
//     scanf("%d",&a);
//     re=prime(a);
//     if(re==2)
//     printf("the number is prime");
//     else
//     printf("not a prime");
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int isprime(int n,int a,int sq)
{
    if(a>sq)
    return 1;
    if(n%a==0)
    return 0;
    return isprime(n,a+1,sq);
}
int main()
{
    int n ,sq;
    scanf("%d",&n);
    sq=sqrt(n);
    if(isprime(n,2,sq))
    printf("prime");
    else
    printf("not a prime");
    return 0; 
}