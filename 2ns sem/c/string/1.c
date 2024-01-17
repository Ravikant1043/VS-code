#include <stdio.h>
#include <string.h>
int main()
{
    int i, k = 0, p, t;
    char s[10], j[10];
    scanf("%[^\n]s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ',')
        {
            j[k] = s[i];
            k++;
        }
    }
    for (i = 0; i < strlen(j); i++)
    {
        if (j[i] == '5')
        {
            t = 1;
            continue;
        }
        else if (j[i] == '8')
        {
            t = 0;
            continue;
        }
        else
        {
            p += j[i];
        }
    }
    for (i = 0; i < strlen(j); i++)
    {
        if (j[i] == '5')
    }
}