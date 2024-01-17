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
    int a,r,k;
    scanf("%d%d",&a,&k);
    r=bin(a);
    printf("%d",r);
    k=pow(10,k);
    
    printf("\n%d",oct(r));
    return 0;
}
