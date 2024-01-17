#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y2,y1;
    float f3;
    printf("Enter the co ordinate of the first point:");
    scanf("%d%d",&x1,&y1);
    printf("Enter the co ordinate of the second point:");
    scanf("%d%d",&x2,&y2);
    f3=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("The distance between the two points is %.4f",f3);
    return 0;
}