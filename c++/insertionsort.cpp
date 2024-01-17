#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //  insertion sorting

    for(int i=1;i<n;i++)
    {
        int t=arr[i],j;
        for( j=i-1;j>=0;j--){
            if (t<arr[j])
            arr[j+1]=arr[j];
        }
        arr[j+1]=t;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}