// A self-dividing number is a number that is divisible by every digit it contains.

// For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

// Also, a self-dividing number is not allowed to contain the digit zero.

// Given a lower and upper number bound, output a list of every possible self dividing number, including t

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j=0,t;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        t=log10(a)+1;
        
        // printf("%d ",t);
    }
    return 0;
}