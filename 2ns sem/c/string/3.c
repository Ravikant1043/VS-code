#include <stdio.h>
#include <string.h>
int main()
{
    int i, j=0, c = 0;
    char s[100];
    scanf("%[^\n]s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            c++;
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            j++;
        if (j == c)
        {
            printf("%c", s[i + 1]);
            return 0;
        }
    }
    return 0;
}