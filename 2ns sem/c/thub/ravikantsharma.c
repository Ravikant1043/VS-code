#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a;
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("vovel");
    else
        printf("consonant");


    printf("Enter the temperature:");
    scanf("%d",a);
    getch();
    return 0;
}

// code to print the given character is constant or not