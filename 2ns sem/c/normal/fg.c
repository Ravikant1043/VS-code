#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void c()
{
    srand(time(NULL));
    printf("%d", rand() % 3);
    
}
int main()
{
    int i = 1,a,b;
    while (i <= 3)
    {
        printf("1=stone\n2=paper\n3=scissor");
        printf("\nEnter what you have chossen");
        scanf("%d", &a);
        fflush(stdin);
        switch (a)
        {
        case 1:
            printf("You have chossen Stone");
            break;

        case 2:
            printf("You have chossen Paper");
            break;

        case 3:
            printf("You have chossen Scissor");
            break;
        default:
            printf("invalid\n");
            break;
        }
        printf("The value choosen by the computer is:");
        printf("\n");
        b=c();
        printf("%d",b);
    }
}