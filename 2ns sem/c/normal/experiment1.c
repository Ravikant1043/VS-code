#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    char a;
    char a1[100],a2[100];
    fflush(stdin);
    scanf("%c\n",&a);
    scanf("%[^\n]s",&a1);
    scanf("\n%[^\n]s",&a2);
    
    printf("%c",a);
    printf("\n%s",a1);
    printf("\n%s",a2);
    return 0;
}