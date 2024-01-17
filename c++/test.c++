#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ispal(ll a){
    string s=to_string(a);
    string b=s;
    reverse(s.begin(),s.end());
    return s==b;
}
int main() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>bit(60);
    // ll ans=0;
    // sort(a.begin(),a.end());
    // int i=0,j=n-1;
    // while(i<j){
    //     ll t=a[i]^a[j];
    //     if(ispal(t))ans++;
    //     i++;j--;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<=n;j++){
    //         ll t=a[i]^a[j];
    //         if(ispal(t))ans++;
    //     }
    // }
ll t=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<61;j++){
            if(a[i]&(1<<j)){
                t=max(t,j);
                bit[j]++;
            }
        }
    }

    ll i=0;
    ll ans=0;
    while(t>i){
        if(bit[i] && bit[t])
        {    
            ll tp=min(bit[i],bit[t]);
            ans=tp<ans?tp:ans;}
        t--;i++;
    }
    cout<<ans;
    return 0;
}