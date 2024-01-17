#include<stdio.h>
int main()
{
    struct name
    {
        char n[20];
        int h,a,f;
    };
    struct name s1,s2;
        int sum,sum2;
    printf("Enter the info about 1st hero: name\nhit movies\naverage movies\nfloop movies\n");
    scanf("%s %d %d %d",&s1.n,&s1.h,&s1.a,&s1.f);
    sum=s1.h*5+s1.a*1-s1.f*5;    
    printf("Enter the info about 2st hero: name\nhit movies\naverage movies\nfloop movies\n");
    scanf("%s %d %d %d",&s2.n,&s2.h,&s2.a,&s2.f);
    sum2=s2.h*5+s2.a*1-s2.f*5;
    if (sum>sum2)
    {
        printf("%s",s1.n);
    }
    else
    {
        printf("%s",s2.n);
    }
    return 0;
}