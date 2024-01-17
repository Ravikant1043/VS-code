#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
vector<ll> max_distinct_prime_factors(ll n) {
    vector<ll>t(n,0),p;
    for(int i=2;i<=n;i++){
        if(!t[i]){
            for(int j=i+i;j<=n;j+=i)t[j]=1;
        }
    }
    for(int i=2;i<n;i++){
        if(t[i]==0)p.push_back(i);
    }
    return p;
}

int main() {
    long long n = 20;
    cin>>n;
    vector<ll> ff = max_distinct_prime_factors(1000000);
    for(int i=0;i<n;i++){
        ll t,c=0;
        unsigned long long p;
        cin>>t;
        // if(ff[0]>t)cout<<0<<"\n";
        // else {
            p=1,c=0;
            for(int i=0;i<ff.size();i++){
                if(p*ff[i]<=t && ff[i]<=t){
                    p*=ff[i];
                    c++;
                }
                else break;
            }
            cout<<c<<"\n";
        // }
    }
    return 0;
}
