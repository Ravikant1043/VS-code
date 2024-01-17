#include <stdio.h>
int main()
{
    int n, p, k, i, j;
    scanf("%d", &n);
    while (n > 0)
    {
        scanf("%d%d", &p, &k);
        int a[p], b[p + k] = {0};
        for (i = 0; i < p; i++)
        {
            scanf("%d", &a[i]);
            b[k + i] = a[i];
        }
        j = k + i;
        for (i = 0; i < p; i++)
        {
            if (b[i] == 0)
            {
                b[i] = b[j];
                j--;
            }
        }
        for (i = 0; i < p; i++)
        {
            printf("%d", b[i]);
        }
    }
    return 0;
}