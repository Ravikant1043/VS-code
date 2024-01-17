#include <stdio.h>
int main()
{
    int a[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptra = a;
    printf("1 %d\n", &a[2]);
    printf("2 %d\n", sizeof(a));
    printf("3 %d\n", &a[1]);
    printf("4 %d\n", &a);
    printf("5 %d\n", *(a + 1));
    printf("6 %d\n", &*(a + 1));
    printf("%o\n", ptra);
    ptra++;
    printf("%o\n", ptra);
    printf("7 %d\n", &a);
    printf("8 %d", *(a + 3));
    return 0;
}

/*output
1746926552
1746926548
1746926544
2
000000f8681ffbd4
1746926544
2*/
