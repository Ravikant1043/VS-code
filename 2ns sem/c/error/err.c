
// no_of_prime_no_bt
#include<stdio.h>
int main()
{
    int a,b,i,j,c=0,t=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        t++;
    }
    printf("%d",t);
    return 0;
}