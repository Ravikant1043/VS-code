// binary search of an element in a array
/*
algorithm for binary search
1. sorted array only
numbers->        1 2 3 4 5
index->          0 1 2 3 4
                 i       j
m=(i+j)/2
arr[m]==se  return 1
arr[m]>se   -->j=m-1
arr[m]<se   -->i=m+1

*/

// binary search is used in only searching the required 1element in any given assending order elements

//using recursion

#include <stdio.h>

int search(int *arr, int n, int se,int i,int j)
{
    static int m;
    // j = n-1;
    m = (i + j) / 2;
    if(i>j)
    return 0;
    if (arr[m] == se)
        return 1;
    else if (arr[m] > se)
    {
        j = m - 1;
        return search(arr, n, se,i,j);
    }
    else if (arr[m] < se)
    {
        i = m + 1;
        return search(arr, n, se,i,j);
    }
}
int main()
{
    int n, i, se;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int j,k;
    j=0;k=n-1;
    scanf("%d", &se);
    if (search(a, n, se,j,k))
        printf("found");
    else
        printf("not found");
    return 0;
}


// without recursion
// #include<stdio.h>
// int search(int *arr,int n,int se)
// {
//     int i=0,j=n-1,m;
//     while(i<=j)
//     {
//         m=(i+j)/2;
//         if(arr[m]==se)
//         return 1;
//         else if(arr[m]>se)
//         j=m-1;
//         else if(arr[m]<se)
//         i=m+1;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n],i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int se;
//     scanf("%d",&se);
//     if(search(a,n,se))
//     printf("Found");
//     else
//     printf("Not found");
//     return 0;    
// }

// problem on binary search 
// su ->4  or 5
// mo ->4  or 5
// tu ->4  or 5
// we ->4  or 5
// th ->4  or 5
// fr ->4  or 5
// sa ->4  or 5   28 left is 2 days


// ****************sorting 