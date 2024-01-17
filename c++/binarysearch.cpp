#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int k)
{
    int l=0,u=n;
    while(l<=u){
        int m=(l+u)/2;
        if (arr[m]==k)
        return m;
        else if(arr[m]<k)
        l=m+1;
        else
        u=m-1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cout<<"Enter the element to search";
    cin>>k;
    cout<<binarysearch(arr,n,k);
    return 0;
}


// binary search runs in a time complexity of O(log(n)).