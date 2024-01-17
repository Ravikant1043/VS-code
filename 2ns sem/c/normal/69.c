#include<stdio.h>

int main()
{
    
    int a,i,count=1,j=1,u;
    scanf("%d",&a);
    u=a;
    while(1)
    {
        i=a%10;
         j++;
        a=a/10;
        if(a==0)
        break;
    }
    while(1)
    {
        i=u%10;
        u=u/10;
        if(u==6)
         break;
        count++;
    }
    printf("%d%d",j,u);
    return 0;
}