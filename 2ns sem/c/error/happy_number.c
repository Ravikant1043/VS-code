#include<stdio.h>
#include<math.h>
int main()
{
    int a,t,i,j,s=0,r;
    scanf("%d",&a);
    while(a/10==0)
    {
    t=(int)log10(a) + 1;
        for(i=1;i<=t;i++)
        {
            r=a/pow(10,t-1);
            s+=pow(r,i);
            a=a%(int)pow(10,t-1);
        }
        a=s;
    }
    if(s==1||s==7)
    printf("True");
    else
    printf("False");
    return 0;
}