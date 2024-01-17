#include <stdio.h>
int min(int *p, int n, int po)
{
    int i = po, t = p[i];
    for (; i < n; i++)
    {
        if (t > p[i])
            t = p[i];
    }
    return t;
}
int main()
{
    int n, k, t;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        t = min(a, n, i);
        printf("%d  ", t);
    }
    return 0;
}