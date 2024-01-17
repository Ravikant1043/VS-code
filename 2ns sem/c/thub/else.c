// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the two numbers:");
//     scanf("%d%d",&a,&b);
//     printf("The biggest number is:");
//     printf("%d",a>b?a:b);
//     return 0;
// }


#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d i%s even");
    }
    else
    {
        printf("The given number is odd");
    }
        return 0;
}