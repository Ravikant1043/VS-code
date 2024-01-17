#include<stdio.h>
int main()
{
    int a[4],i;
    for(i=0;i<4;i++)
    scanf("%d",&a[i]);
    int x=0;
    for(i=0;i<4;i++)
    {
        if (x<a[i])
        {
            x=a[i]; 
        }
    }
    printf("%d",x);
    return 0;
}