#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s="aaabbbbcccc";
    // unordered_map<char,int>mp;
    // for(auto &i:s)mp[i]++;
    // int c=INT_MIN;
    // char st;
    // for(auto &it:mp){
    //     if(it.second>c){
    //         c=it.second;
    //         st=it.first;
    //     }
    // }
    // cout<<st<<" "<<c;
    // int a;
    // cin>>a;
    // bitset<32>ab(1);
    // cout<<ab;
    // for(int i=31;i>=0;i--){
    //     if(a&(1<<i))cout<<"1";
    //     else cout<<"0";
    // }
    vector<int>a(4);
    for(int i=0;i<4;i++)a[i]=i*2 +2;
    cout<<lower_bound(a.begin(),a.end(),1)-a.begin();
}