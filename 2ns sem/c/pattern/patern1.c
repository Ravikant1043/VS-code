// output is as follows0
// Enter the numbers of rows:6
//       *******
//      *******
//     *******
//    *******
//   *******
//  *******
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the numbers of rows:");
    scanf("%d",&a);
    for (int  i = a; i >=1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= a; k++)
        {
           if(k==1||k==a||i==1||i==a)
            printf("*");
            else
            printf(" ");
        }       
        printf("\n");
    }
}