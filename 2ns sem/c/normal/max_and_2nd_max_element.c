#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], max2 = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        else if (a[i] > max2 && a[i] < max)
        {
            max2 = a[i];
        }
    }
    printf("%d\t%d", max, max2);
    return 0;
}