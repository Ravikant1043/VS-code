// printing the total subsets using bit manupulation  of a given array

#include<iostream>
using namespace std;

void subset(int arr[],int n){
    int i,j;
    for(i=0;i<(1<<n);i++){
        for(j=0;j<n;j++){
            if(i&(1<<j))
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];

    subset(ar,n);
    return 0;
}