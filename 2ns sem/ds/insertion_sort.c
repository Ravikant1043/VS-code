#include <stdio.h>
void display(int *p, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}
void insertion_sort(int *p, int n)
{
    int i, t, j;
    for (i = 1; i < n; i++)
    {
        t = p[i];
        j = i - 1;
        while (j >= 0 && p[j] > t)
        {
            p[j + 1] = p[j];
            j--;
        }
        p[j + 1] = t;
        display(p, n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The results are as follows:\n");
    insertion_sort(a, n);
    return 0;
}