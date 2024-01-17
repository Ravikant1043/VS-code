#include <stdio.h>
int main()
{
    int a, n, m, i, j;
    scanf("%d", &a);
    if (a % 2 == 0)
        m = (a / 2);
    else
        m = (a + 1) / 2;
    // if (a % 2 == 0)
    {
        for (i = 1; i <= a; i++)
        {
            for (j = 1; j <= m; j++)
            {
                printf("%d", j);
            }
            for (j = 1; j <= m-1; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
    }
    // else
    // {
    //     for (i = 1; i <= a; i++)
    //     {
    //         for (j = 1; j <= m; j++)
    //         {
    //             printf("%d", j);
    //         }
    //         for (j = 1; j <= m - 1; j++)
    //         {
    //             printf("%d", j);
    //         }
    //         printf("\n");
    //     }
    // }
    return 0;
}