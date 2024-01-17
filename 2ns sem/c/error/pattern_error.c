// 5 
// 12312
// 12312
// 12312
// 12312
// 12312

#include<stdio.h>
int main()
{
    int a,j,i,t;
    scanf("%d",&a);
    t=a;
    if(a%2==0)
    a/=2;
    else
    {
    a+=1;a=a/2;
    }
    for(i=1;i<=t;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%d",j);
        }
        if (a%2==0)
            {for(j=1;j<=a;j++)
                {printf("%d",j);}
            }
        else
        {for(j=1;j<=a-1;j++)
           { printf("%d",j);}
        }
        printf("\n");
    }
    return 0;
}