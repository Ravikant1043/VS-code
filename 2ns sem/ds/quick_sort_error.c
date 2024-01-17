#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int partition(int *p, int l, int u)
{
    int k;
    k = p[l];
    while (l < u)
    {
        while (p[l] <= k)
        {
            l++;
        }
        while (p[u] > k)
        {
            u--;
        }
        if (l < u)
        {
            swap(&p[l], &p[u]);
        }
    }
    swap(&p[l], &p[u]);
    return u;
}
void quick_sort(int *p, int l, int u)
{
    if (l < u)
    {
        int po = partition(p, l, u);
        quick_sort(p, l, po - 1);
        quick_sort(p, po + 1, u);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    i = 0;
    quick_sort(a, i, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}