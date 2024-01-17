#include <stdio.h>
int main()
{
    int i, j = 1, n;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        j = 0;
        while (1)
        {
            if ((j * 2) % b[i] == a[i])
            {
                printf("%d\n", j);
                break;
            }
            j++;
        }
    }
    return 0;
}