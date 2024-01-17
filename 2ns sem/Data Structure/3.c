#include<stdio.h>
int rev(int a)
{
    int p=0;
    if(a==0)
    return 0;
    else
    return p;
    // if(a%10!=0)
    p=p*10+(a%10);
    rev(a/10);
    // return p;
}
int main()
{
    int a,t;
    scanf("%d",&a);
    t=rev(a);
    return 0;
    printf("%d",t);
}


// //  armstrong, factorial, fibonacci


// #include<stdio.h>
// int 