#include<stdio.h>
//#include<stdlib.h>
int main()
{
    float first,second;
    char a;
    while(1)
    {
         printf("enter the no;");
         scanf(" %f",&first);
         printf("enter the operation to perform\n:  Q-for quitting\n  1-inches to feet\n  2-kg to pound\n  3-km to miles \n");
         //fflush(stdin);
         scanf(" %c",&a);
         switch(a)
         {
             case '3':
             printf("%f km is equal to %f miles\n",first,first*0.621);
             break;

             case '2':
             printf("%f kg is equal to %f pound\n",first,first*2.205);
             break;

             case '1':
             printf("%f inches is equal to %f feet\n",first,first*0.0833);
             break;

             case 'Q':
             printf("Quitting the programme............");
             goto end;
             break;

             default:
             printf("invalid");
         }
    }
    end:
    return 0;
}