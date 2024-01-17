#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the colour code:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 'R':printf("red");
    break;
    case 'r':
    printf("red");
    break;

    case 'Y': printf("Yellow");
    break;
    case 'y':
    printf("Yellow");
    break;

    case 'v':printf("violet");
    break;
    case 'V':
    printf("violet");
    break;

    case 'O': printf("Orange");
    break;
    case 'o':
    printf("Orange");
    break;

    case 'I':printf("Indigo");
    break;
    case 'i':
    printf("Indigo");
    break;

    default:printf("INVALID COLOUR CODE ");
        break;
    }
    return 0;
}