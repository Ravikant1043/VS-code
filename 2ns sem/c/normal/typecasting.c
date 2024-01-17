#include<stdio.h>
int main()
{
    float a;
    int i;
    float sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum+=(1/i);
    }
    printf("%.2f",sum);
    return 0;
}