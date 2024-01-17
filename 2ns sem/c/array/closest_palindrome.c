#include <stdio.h>
int max(int a)
{
 
    int p = 0, t;
    while (1)
    {
        t = a;
        while (a != 0)
        {
            p = p * 10 + a % 10;
            a /= 10;
        }
        if (t == p)
            return t;
            a=t;
            a++;
    }
}
int min(int a)
{
    int p = 0, t;
    while (1)
    {
        t = a;
        while (a != 0)
        {
            p = p * 10 + a % 10;
            a /= 10;
        }
        if (t == p)
            return t;
            a=t;
            a--;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    scanf("%d", &n);
    int j, k;
    j = min(n);
    k = max(n);
    if (j - n > k - n)
        printf("%d", k);
    else if (j - n == k - n)
        printf("%d %d", j, k);
    else
        printf("%d", j);
    return 0;
}