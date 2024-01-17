#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<=9;i++)
    {
        if(a%i==0)
        {
            if(i!=2||i!=3||i!=5)
            {printf("Ugly Number");return 0;}
        }
    }
    printf("Not Ugly Number");
    return 0;
}