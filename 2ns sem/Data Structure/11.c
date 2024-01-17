#include <stdio.h>
int *merge_sort(int *a, int n, int *b, int p)
{
    int i = 0, j = 0, k = 0;
    static int res[100];
    while (i < n && i < p)
    {
        if (a[i] > b[j])
        {
            res[k] = b[j];
            j++;
        }
        else
        {
            res[k] = a[i];
            i++;
        }
        k++;
    }
    while(i<n)
    {
        res[k++]=b[i++];
    }
    while(j<n)
    {
        res[k++]=b[j++];
    }
    return res;
}
int main()
{
    int i, j, n, p, *re;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // second array
    scanf("%d", &p);
    int b[p];
    for (i = 0; i < p; i++)
        scanf("%d", &b[i]);
    re = merge_sort(a, n, b, p);
    for (i = 0; i < n + p; i++)
    {
        printf("%d ", re[i]);
    }
    return 0;
}