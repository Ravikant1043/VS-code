#include<stdio.h>
int main()
{
    int a=1;
    // printf("enter the no.");
    while(1)
    {
        for(int i=1;i<=10;i++)
        {
            printf("%d *%d=%d",a,i,a*i);
            printf("\n");
        }
    a++;
    printf("enter the non zero number to continue:");
    int t;
    scanf("%d",&t);
    if(t==0)
    {break;}
    }
return 0;
}