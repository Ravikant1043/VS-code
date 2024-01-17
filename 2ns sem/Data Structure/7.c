#include<stdio.h>

int linear_search(int *arr,int n ,int se)
{
    static int i=0;
    if(i==n)
    return 0;
    if(arr[i]==se)
    return 1;
    i++;
    return linear_search(arr,n,se);
}
int main()
{
    int arr[100],n,se,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    if(linear_search(arr,n,se))
    printf("found");
    else
    printf("Not found");
    return 0;
}