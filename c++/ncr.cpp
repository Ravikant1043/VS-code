#include<bits/stdc++.h>
using namespace std;
vector<int>fact;
int mod=1e9+7;
void precompute(){
    fact[1]=1;
    int n=fact.size();
    for(int i=2;i<n;i++){
        fact[i]=(fact[i-1]%mod*i%mod)%mod;
    }
}
int poww(int a,int b){
    if(b==0)return 1;
    if(b%2==0)return poww((a%mod)*(a%mod),b/2)%mod;
    return ((a%mod)*poww(a,b-1)%mod)%mod;
}
int nCr(int n, int r)
{
    fact.resize(999999);
    precompute();
    
    // n=fact[n];
    // int p=n-r;
    // r=((poww(fact[p],mod-2))%mod * (poww(fact[r],mod-2)))%mod;
    return fact[n];
}
int main(){
    cout<<nCr(1999,299);
}