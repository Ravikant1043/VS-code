#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   // char ch;
    char s1[100], s2[100];
    int i=0,j=0;
    //scanf("%c",&ch);


    for (i = 0; i < 100; i++)
    {
        scanf(" %c", &s1[i]);
        if (s1[i] == '\n')
            break;
    }
    s1[i] = '\0';



    for (i = 0; i < 100; i++)
    {
        scanf("%c", &s2[i]);
        if (s2[j] == '\n')
            break;
    }
    s2[i] = '\0';



       // printf("%c",ch);
    i = 0,j= 0;
    while (s1[i] != '\0')
    {
        printf("%c", s1[i]);
        i++;
    }
    printf("\n");
     while (s2[j] != '\0')
    {
        printf("%c", s2[j]);
        i++;
    }
}