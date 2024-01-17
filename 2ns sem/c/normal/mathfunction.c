#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    printf("enter the no of which u want the square root: ");
    scanf("%f", &a);
    b = pow(a,.5);
    printf("%.2f", b);
    return 0;
}