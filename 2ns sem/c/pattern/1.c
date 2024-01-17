#include <stdio.h>
int main()
{
    int n, i, o, j, k = 0;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("%c",i+64);
    }
    
    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        o = j;
        for (j = 1; j <= (2 * k) - 1; j++)
        {
            printf(" ");
        }
        for (j = o-2 ; j >= 0; j--)
        {
            printf("%c", j + 65);
        }
        printf("\n");
        k++;
    }
    return 0;
}