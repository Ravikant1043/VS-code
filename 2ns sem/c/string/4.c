// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// int main()
// {
//     int i, j, n, ch1, ch2;
//     char a[50], temp;
//     // clrscr();
//     printf(“Enter any string:”);
// scanf(“% s”, a);
//     n = strlen(a);

//     for (i = 1; i < n; ++i)
//         for (j = 0; j < (n - i); ++j)
//         {
//             ch1 = a[j];
//             ch2 = a[j + 1];
//             if (ch1 > ch2)
//             {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     printf(“String after arranging % s”, a);
//     // getch();
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, i = 0, j, k;
    scanf("%d", &n);
    char a[5][100];

    for (i = 0; i < n; i++)
    {
        printf("Enter the string");
        // scanf("%[^\n]s", a[i]);
        gets(a[i]);
    }
    // for (i = 0; i < n; i++)
    // {
    //     k = 0;
    //     for (j = 0; a[i][j] != '\0'; j++)
    //     {
    //         if ('0' <= a[i][j] <= '9')
    //         {
    //             k = 1;
    //             break;
    //         }
    //     }
    //     if (k == 1)
    //         printf("Yes\n");
    //     else
    //         printf("No\n");
    // }

    // char s[9];
    // scanf("%[^\n]s",s);
    // printf("%s",s);
    return 0;
}