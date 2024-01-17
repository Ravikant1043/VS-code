// Enter the numbers of rows:5
// *****
// ** **
// * * *
// ** **
// *****
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the numbers of rows:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
        if(i==1||i==a||j==1||j==a)
        printf("*");
        else if(i==j||i==(a-j+1))
        printf("*");
        else
        printf(" ");
        }
        printf("\n");
    }
}