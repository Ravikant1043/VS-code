// swaping the largest value of the array with the last element of the array
// or swapint the minimum element with the first element of the array

#include<stdio.h>
// void sort(int *a,int n)
// {
//     int i,j,m,t;
//     m=0;
//     for(i=0;i<n;i++)
//     {
//         if(m<=a[i])
//         m=a[i];
//     }
//     t=a[n-1];
//     a[n-1]=m;
//     m=t;
//     sort(a,n-1);
// }
int max(int *a,int n)
{
    int i,ind=0,maxi=a[0];
    for(i=0;i<=n;i++)
    {
        if(maxi<a[i])
        {
            maxi=a[i];
            ind=i;
        }
    }
    return ind;
}
void sort(int *a,int n)
{
    int i,maxi,temp;
    for(i=n-1;i>=0;i--)
    {
        maxi=max(a,i);
        temp=a[i];
        a[i]=a[maxi];
        a[maxi]=temp;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}