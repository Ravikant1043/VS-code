#include <stdio.h>
int k = 0;
int func(int x)
{
    int i, t = 0;
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
            t++;
    }
    if (t == 2)
    {
        return 1;
    }
}
int main()
{
    int i, n, m;
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
    {
        if(func(i)==1)
        k++;
    }
    printf("%d", k);
    return 0;
}