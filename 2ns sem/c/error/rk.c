#include <stdio.h>
#include <string.h>
char str(char t[10])
{
    char f[10];
    int i=0,k;
    k=strlen(t);
    while(k>=0)
    {
        f[i]=t[k];
        k--;i++;
    }
    return f;
}
int main()
{
    int j, d = 0;
    char s[30], i[10];
    scanf("%[^\n]s", s);
    for (j = 0; s[j] != '\0'; j++)
    {
        if (s[j] == ' ')
        {
            i[d] = '\0';
            printf("%s ",str(i));
            d = 0;
        }
        else
        {
            i[d] = s[j];
            d++;
        }
    }
    i[d] = '\0';
    printf("%s", strrev(i));
    return 0;
}



