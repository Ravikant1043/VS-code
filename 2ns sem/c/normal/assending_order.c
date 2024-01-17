#include <stdio.h>
int main()
{
    int i, j, a, n, number[30];
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
        return 0;
}

// transpose of a matrix
// #include <stdio.h>
// int main()
// {
//     int n, m, i, j;
//     printf("Enter the number of rows and column of the marix\n");
//     scanf("%d%d", &n, &m);
//     int a[n][m];
//     printf("Enter the elements of the matrix\n");
//     // reading
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//             scanf("%d", &a[i][j]);
//     }
//     for ( i = 0; i < n; i++)
//     {
//         for ( j = 0; j < m; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
    
//     printf("Transpose of the matrix is\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//             printf("%d ", a[j][i]);
//         printf("\n");
//     }
// }