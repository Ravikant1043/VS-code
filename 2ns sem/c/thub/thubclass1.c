// to print the sum of two numbers
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the two numbers:");
//     scanf("%d %d",&a,&b);
//     printf("Sum of the two numbers is %d",a+b);
//     return 0;
// }

// to find the si;

// #include<stdio.h>
// int main()
// {
//     int p,t,r;
//     printf("Enter the principle, time, and rate of interest:");
//     scanf("%d%d%d",&p,&t,&r);
//     printf("the simple interest is: %f",(float)(p*r*t)/100);
//     return 0;
// }


// to convert the temperature from celcius to farenhite:

#include<stdio.h>
int main()
{
    float c;
    printf("Enter the temperature in degree celcius");
    scanf("%.2f",&c);
    printf("The temperature in degree farenhite is: %.2f",(float)((c*9/5)+32));
    return 0;
}