#include <stdio.h>
int max(int k)
{
    int n, p = 0;
    while (1)
    {
        n = k;
        while (n != 0)
        {
            p = p * 10 + (n % 10);
            n /= 10;
        }
            return p;
        if (p == k)
            return k;
        else
            k++;
    }
}
int main()
{
    int n, m;
    scanf("%d", &n);
    m = max(n);
    printf("%d", m);
    return 0;
}
