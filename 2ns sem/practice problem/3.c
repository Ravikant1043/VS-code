// #include <stdio.h>
// int main()
// {
//    int a;
//    scanf("%d", &a);
//    if (a < 3)
//    {
//       printf("The pattern is not possible");
//       return 0;
//    }
//    for (int i = 1; i <= a; i++)
//    {
//       for (int j = 0; j < i; j++)
//       {
//          printf("*");
//       }
//       {
//          printf("\n");
//       }
//    }
//    for (int i = a - 1; i >= 0; i--)
//    {
//       for (int j = i; j > 0; j--)
//       {
//          printf("*");
//       }
//       if (i != 0)
//          printf("\n");
//    }
//    return 0;
// }

#include <stdio.h>
int main()
{
    int i, j, s, k, m;
    printf("ENTER THE VALUE OF k=");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (s = 1; s <= i; s++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (j = 1; j <= k; j++)
    {
        for (m =( k-1); m >= j; m--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}