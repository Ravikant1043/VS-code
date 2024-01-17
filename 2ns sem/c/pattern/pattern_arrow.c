//to print the arrow headed pattern 
#include<stdio.h>
void pattern(int x)
{
    for(int i=0;i<=x;i++)
    {for(int j=0;j<i;j++)
    printf("%d",i);
    
    printf("\n");}
}
void reverse(int y)
{
    for(int i=y;i>=0;i--)
    {for(int j=i;j>0;j--)
        {printf("%d",i);}
        printf("\n");}
}
int main()
{
    int a;
    printf("Enter the numbers of rows: ");
    scanf("%d",&a);
    printf("\r");
    pattern(a);
    reverse(a-1);
    return 0;
}
