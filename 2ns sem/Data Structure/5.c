#include<stdio.h>
int linear_search(int *arr,int n,int se)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==se)
        return 1;
    }
    return -1;
}
int  main()
{
    int arr[100],n,i,se;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    if(linear_search(arr,n,se))
    {
        printf("found");
    }
    else
    printf("not found");
return 0;
}