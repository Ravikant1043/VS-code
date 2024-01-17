#include<stdio.h>
int self(int n)
{
    int a,i;
    a=n;
    while(a)
    {
        i=a%10;
        if(n%i!=0)
        return 0;
        a/=10;
    }
    return 1;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    // for(i=a;i<=b;i++)
    // {
    //     if(self(i)==1)
    //     printf("%d ",i);
    // }
    a=b;
    while(a)
    {
        i=a%10;
        if(b%i!=0)
        printf("%d ",i);
        a/=10;
    }
    return 0;
}