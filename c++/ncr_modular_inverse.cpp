#include<bits/stdc++.h>
using namespace std;
int mod=1e9;  //taking a standard modular value

int power(int a,int b){
    if(b==0)return 1;
    if(b&1)return (a%mod * power(a,b-1)%mod)%mod;
    return power((a%mod *a%mod)%mod,b/2);
}

vector<int>fact,ifact;
void pre_compute_the_factors(int a){
    fact.resize(a+1);
    ifact.resize(a+1);

    fact[0]=1;
    for(int i=1;i<=a;i++) fact[i]=(fact[i-1]*i)%mod;
    ifact[a]=power(fact[a],mod-2);
    for(int i=a-1;i>=0;i--) fact[i]=(fact[i+1]%mod * i+1)%mod;
}
int main(){
    int n;
    // cin>>n;
    // pre_compute_the_factors(n);
    cout<<power(11,mod-2)<<"\n";
    // cout<<ifact[10];
}