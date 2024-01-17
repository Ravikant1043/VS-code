#include <stdio.h>
int main()
{
    int n, p, o, k = 0, j;
    scanf("%d%d%d", &o, &n, &p);
    int t = n + p;
    int a[o][n], i, b[o][t];
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    while (k < o)
    {
        t=n+p;
        for (i = 0; i < t; i++)
            b[k][i] = 0;

        for (i = 0; i < n; i++)
        {
            b[k][i + p] = a[k][i];
        }
        t--;
        for (i = p - 1; i >= 0; i--)
        {
            b[k][i] = b[k][t];
            t--;
        }
        k++;
    }
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}