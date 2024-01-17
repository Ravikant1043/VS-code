#include <stdio.h>
int main()
{
    int n, i, c, count = 0;
    int r1, r2;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &c);
        for (int j = c;; j++)
        {
            count == 0;
            for (int k = 1; k < j; k++)
            {
                if (j % k == 0) 
                {
                    count++;
                }
            }
            if (count == 2)
            {
                r1 = j;
            }
            break;
        }
        for (int j = c;; j--)
        {
            count == 0;
            for (int k = 1; k < j; k++)
            {
                if (j % k == 0)
                    count++;
            
            }
             if (count == 2)
                    r2 = j;
                    break;
        }
    }
    if (r1 < r2)
        printf("%d\n", r1);
    else
        printf("%d\n", r2);
    return 0;
}