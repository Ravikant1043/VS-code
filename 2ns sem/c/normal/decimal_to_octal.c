#include<stdio.h>
int main()
{
    int a,i,s[10],j=0;
    printf("Enter the number:");
    scanf("%d",&a);
    while(1)
    {
        i=a%8;
        s[j]=i;
        if(s[j]<=8)
        {j++;
        break;}
    }
    s[j]==0;
    j==0;
    while(1)
    {
        printf("%d",s[j]);
        if(s[j]==0)
        break;
    }
    return 0;
}