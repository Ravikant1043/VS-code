#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char ch;
    char s1[100], s2[100];
    int i;
    printf("enter the character");
    scanf("%c",&ch);
    printf("Enter the string:");

      for (i = 0; i < 10; i++)
    {
        scanf(" %c", &s1[i]);
        if (s1[i] == '\n')
            break;
    }
    s1[i] = '\0';

       printf(" character is %c",ch);
    i = 0;
    printf("the string is:");
    while (s1[i] != '\0')
     {
        printf("%c", s1[i]);
        i++;
      }
   return 0;
}