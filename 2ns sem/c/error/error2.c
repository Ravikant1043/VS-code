#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char name[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    printf("%s",name[2]);
    return 0;
}