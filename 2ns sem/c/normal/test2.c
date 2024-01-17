#include<stdio.h>
#include<math.h>
int bin(int a)
{
    int p=0,i=1;
     while (a != 0) {
        p += (a % 2) * i;
        a /= 2;
        i *= 10;
    }
    return p;
}
int oct(int a)
{
    int p=0,i=0;
    while(a!=0)
    {
        p+=(a%10*pow(2,i));
        a/=10;
        i++;
    }
    return p;
}
int main()
{
    int a,p=0;
    scanf("%d",&a);
    int r=bin(a);
    while(r!=0)
    {
        if(r%10==1)
        p*=10+0;
        else if(r%10==0)
        p*=10+1;
        r/=10;
    }
    printf("%d",oct(p));
    return 0;
}