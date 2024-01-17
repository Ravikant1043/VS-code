#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,j=0,i,k,b,t;
    // int r=0,s=0;
    scanf("%d%d",&a,&b);
    t=a;
    for(k=0;k<b;k++)// last digits=j
    {
        i=a%10;
        a/=10;
        j=j*10+i;
    }
    a=t;
   char s[]={a};
   t=strlen(s);
   t=a/((t-b)*10);
    printf("%d",abs(t-s));
    return 0;
}