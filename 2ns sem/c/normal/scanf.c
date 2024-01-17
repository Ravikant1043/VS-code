#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    char a;
    
    char s1[100],s2[100];
    fflush(stdin);
    printf("enter the ch:");
    scanf("%c", &a);
    printf("enter the string:\n");
    for (i = 0; i < 100; i++)
    {
        scanf(" %c", &s1[i]);
        if (s1[i] == '\n')
            break;
        // printf("%c ",s1[i]);    
    }

    s1[i] ='\0';
    // fflush(stdin);
    // printf("s1=%s\n",s1);

    printf("2nd string:");
    for (i = 0; i < 100; i++)
    {
        scanf("%c", &s2[i]);
        if (s2[i] == '\n')
        break;
    }
    s2[i] = '\0';
    
    // printf("s2=%s",s2);      // printing a
    i = 0;
    while (s1[i] != '\0')       //printing s1
    {
        printf("%c", s1[i]);
        i++;
    }

    i = 0;
    while (s2[i] != '\0')       //printing s1
    {
        printf("%c", s2[i]);
        i++;
    }
    return 0;
}