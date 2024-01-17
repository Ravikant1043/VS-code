#include<stdio.h>
int main()
{
    int i,a,count=0,m=0,k,j,t=0,l=0,o;
    scanf("%d",&a);
    o=a;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        count++;
    }
    if(count==2)
    {
        while(a!=0)
        {
            j=a%10;
            m=0;
            for(k=1;k<=j;k++)
            {
            if(j%k==0)
            m++;
            }
            if(m==2)
            {t++;}
            a/=10;
            l++;
        }
    }
    if(l==t||o==2||o==3||o==5||o==7)
    printf("Mega Prime");
    else
    {
        printf("Not Mega Prime");
    }
    return 0;
}