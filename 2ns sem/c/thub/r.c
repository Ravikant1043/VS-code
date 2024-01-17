#include <stdio.h>
int main()
{
    int a, i = 0, j = 0, k = 0, c = 0;
    scanf("%d", &a);
    while (i <= 3)
    {
        while (j <= 3)
        {
            while (k <= 3)
            {
                if (a == (i + j + k))
                {
                    c++;
                }
                k++;
            }
            if (a == i + j)
                c++;
            j++;
        }
        if (a == i)
            c++;
        i++;
    }
    printf("%d", c);
    return 0;
}