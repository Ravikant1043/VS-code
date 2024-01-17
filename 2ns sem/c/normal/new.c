#include <stdio.h>
void additon (int *x, int *y)
{
    int temp;
    temp = *x ;
    *x = *x + *y;
    *y = -(*x - 2 * temp);
}
int main()
{
    int a, b;
    printf("enter the no:");
    scanf("%d %i", &a, &b);
    additon(&a, &b);
    printf("\n%i %i", a, b);    
    printf("\a");
    return 0;
}