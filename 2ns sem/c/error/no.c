#include<stdio.h>
#include<math.h>
int main()
{
    int a,r=0,x,s=0,t;
    scanf("%d",&a);
    if(a<0)
    a=(-a);
    x=pow(a,2);
    while(a!=0)
    {
        t=a%10;
        a/=10;
        r=t+r*10;
    }
    while(x!=0)
    {
        t=x%10;
        x/=10;
        s=t+s*10;
    }
    if(pow(r,2)==s)
    {printf("True");}
    else
    {printf("False");}
    return 0;
}