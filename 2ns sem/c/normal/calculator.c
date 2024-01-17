// code of the calculator
#include<stdio.h>
int main()
{
    float a,b,c;
    char h;
    while(1)
    {
      printf("\nenter the first no.:");
      scanf("%f",&a);
      printf("\nenter the operation to perform(+,-,/,*): & Q for quitting:");
      scanf(" %c",&h);
      printf("\nenter the second no:");
      scanf("%f",&b);
      switch(h)
      {
        case '+': c=a+b;
        printf("sum= %.2f",c);
        break;

        case '-': c=a-b;
        printf("subtract= %f",c);
        break;

        case '/':c=a/b;
        printf("divide= %f",c);
        break;

        case '*': c=a*b;
        printf("product= %f",c);
        break;
        
        case 'Q':
        printf("Quitting the programme.......");
        goto end;
        break;
        
        default: printf("Invalid ");
      }
    }
    end:
    return 0;
}
