#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k,x;
    cin>>k>>x;
    if(x<a[0]){
        for(int i=0;i<k;i++)cout<<a[i]<<" ";
        cout<<"5";
    }
    else if(x>a[n-1]){
        int p=n-k-1;
        for(;p<n;p++)cout<<a[p]<<" ";
        cout<<"4";
    }
    else{
        int p;
        for(int i=0;i<n;i++)if(a[i]==x)p=i;
        if(p<=k/2){
            for(int i=0;i<k;i++)cout<<a[i]<<" ";
            cout<<"1";
        }
        else if(n-p<n/2){
            for(int i=n-p;i<n;i++)cout<<a[i]<<" ";
            cout<<"11 ";
        }
        else{
            int i;
            p-=(k/2);
            for(i=p;i<k+p;i++)cout<<a[i]<<" ";cout<<"56";
        }
    }
    return 0;
}