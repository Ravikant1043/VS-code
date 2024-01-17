#include <stdio.h>
#include <math.h>
int main()
{
  double n, result;

  printf("Enter a number to calculate its square root:");
  scanf(" %lf", &n);

  result = sqrt(n);

  printf("Square root of %.2lf = %.2lf\n", n, result);
  return 0;
}