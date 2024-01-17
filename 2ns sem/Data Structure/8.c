// sorting

#include <stdio.h>
void insertion_sort(int *a, int n)
{
    int i,j,t;
    for (i = 1; i < n; i++)
    {
        t = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (t > a[j])
            {
                a[j + 1] = t;
                break;
            }
            else
            {
                a[j + 1] = a[j];
            }
        }
        if (j == -1)
            a[0] = t;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    insertion_sort(a,n);
    // for (i = 1; i < n; i++)
    // {
    //     t = a[i];
    //     for (j = i - 1; j >= 0; j--)
    //     {
    //         if (t > a[j])
    //         {
    //             a[j + 1] = t;
    //             break;
    //         }
    //         else
    //         {
    //             a[j + 1] = a[j];
    //         }
    //     }
    //     if (j == -1)
    //         a[0] = t;
    // }
    // printf("\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}