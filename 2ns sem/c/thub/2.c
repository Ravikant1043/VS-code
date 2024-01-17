#include<stdio.h>
int main()
{
    int r1,r2,r3,r4,r5,a;
    printf("Enter the speed of \nracer 1\nracer 2\nracer 3\nracer 4\nracer 5\n");
    scanf("%d%d%d%d%d",&r1,&r2,&r3,&r4,&r5);
    a=(r1+r2+r3+r4+r5)/5;
    if (r1>a)
    {
        printf("Racer 1 is elligible speed = %d\n",r1);
    }
     if (r2>a)
    {
        printf("Racer 2 is elligible speed = %d\n",r2);
    } if (r3>a)
    {
        printf("Racer 3 is elligible speed = %d\n",r3);
    } if (r4>a)
    {
        printf("Racer 4 is elligible speed = %d\n",r4);
    } if (r5>a)
    {
        printf("Racer 5 is elligible speed = %d\n",r5);
    }
    return 0;
}