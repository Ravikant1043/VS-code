#include<bits/stdc++.h>
using namespace std;

void sorting_using_bits(vector<int>&a){
    int n=a.size();
    int id=0;
    for(int i=31;i>=0;i--){
        int setbit=(1<<31);
        int maxele=INT_MAX;
        int maxid=id;
        for(int j=id;j<n;j++){
            if((a[j]&setbit)==setbit && a[j]>maxele){
                maxele=a[j];
                maxid=j;
            }
        }
        if(maxele==INT_MIN)continue;
        a[maxid]=a[id];
        a[id]=maxele;
        id++;

    }
}

int main(){
    // int n;
    // cin>>n;
    // vector<int>a(10,0);
    // for(int i=0;i<n;i++)cin>>a[i];
    // sorting_using_bits(a);
    // for(auto i:a)cout<<i<<" ";
    // cout<<'1'-'0';
    vector<int>t;
    for(int i=0;i<n;i++)t.push_back(i);
    for(auto &i:t)cout<<i<<" ";
    t.erase(2);cout<<endl;
    for(auto &i:t)cout<<i<<" ";
    return 0;
}