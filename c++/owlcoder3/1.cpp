// #include<bits/stdc++.h>
// using namespace std;

// int setbits(int n){
//     int count=0;
//     for(int i=0;i<32;i++)if(n&(1<<i))count++;
//     return count;
// }
// typedef long long ll;
// int main(){
//     int n;
//     cin>>n;
//     cout<<(int)log2(n);

// }
// int hhh(){
//     // int a=9;
//     // int b=~(a);
//     // cout<<~a<<" ";
//     // int t=~(~(a)|(1<<2)); // (a& ~(1<<(b-1)))  turn off the bit
//     // cout<<t;
//     // cout<<setbits(10);
//     // cout<<~(12)<<"\n";
//     // bitset<31> bb(a);
//     // bitset<31> cb(b);
//     // cout<<bb<<" "<<a<<"\n";
//     // cout<<cb<<" "<<b<<"\n";
//     // cout<<bb.count()<<" "<<cb.count();


//     // bitset<10>a(10);
//     // cout<<a.to_string()<<endl;

//     // 
//     // bitset<32> a(1);
//     // string s=a.to_string();
//     // reverse(s.begin(), s.end());
//     // cout<<stoll(s,nullptr,2);
//     // cout<<atoi(s);

//     // int n=1;
//     // ll ans=0;
//     // ll i=0;
//     // while(i<32){
//     //     i++;
//     //     if(n&1){
//     //         ans|=1;
//     //     }
//     //     if(n)n>>=1;
//     //     ans<<=1;
//     // }
//     // cout<<(ans>>1);

//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0; i<n; i++)cin>>v[i];

//     vector<vector<int>>ans;

//     vector<int>temp(32,0);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<32;j++)
//         {
//             if(v[i]&(1<<j))
//             {
//                 temp[j]++;
//             }
//         }
//         ans.push_back(temp);
//     }
//     // for(int i=0;i<n;i++){
//     //     for(int j=31;j>=0;j--){
//     //         cout<<ans[i][j];
//     //     }
//     //     cout<<"\n";
//     // }
//     // enter the query length
//     int q;
//     cin>>q;
//     int l,r;
//     while(q--){
//         cin>>l>>r;
//         int anss=0;
//         if(l==0){
//             int len=r+1;
//             for(int i=0;i<32;i++){
//                 if(ans[r][i]==r+1)anss|=(1<<i);
//             }
//         }
//         else{
//             int len=r-l+1;
//             for(int i=0;i<31;i++){
//                 if((ans[r][i]-ans[l-1][i])==len)anss|=(1<<i);
//             }
//         }
//         cout<<anss<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int help(vector<int>& a,int i,int &n,vector<int>&dp){
//     if(i>=n)return 0;
//     if(dp[i]!=-1)return dp[i];
//     return dp[i]=max(help(a,i+2,n,dp)+a[i],help(a,i+1,n,dp));
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;i++)cin>>a[i];
//     vector<int>dp(n,-1),hp(n,-1);

//     cout<<max(help(a,1,n-1,dp)+a[0],help(a,1,n,hp));
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back;
#define ppb pop_back;
int mod=1e9+7;
// code by Ravikant sharma
// ______________________________
void FastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


// //////////   dfs traversal of the graph
void dfs(vector<int>adj[],int start,int vis[],vector<int>&ans){
    vis[start]=1;
    for(auto &i:adj[start]){
        if(vis[i]==0)dfs(adj,i,vis,ans);
    }
    ans.push_back(start);
}
ll gcd(ll n1, ll n2)
{
    if (n2 != 0)
       return gcd(n2, n1 % n2);
    else 
       return n1;
}

ll power(ll a,ll b){
    if(b==0)return 1;
    if(b%2==0)return power((a)*(a),b/2);
    return (a)*power(a,b-1);
}

ll binarymul(ll a ,ll b){
    ll ans=0;
    while(b>0){
        if(b&1)ans=(ans+a)%mod;
        a=(a+a)%mod;
        b>>=1;
    }
    return ans;
}

ll binaryexpo(ll a,ll b){
    ll ans=1;
    while(b>0){
        if(b&1)ans=binarymul(ans,a);
        a=binarymul(a,a);
        b>>=1;
    }
    return ans;
}

static bool cmp(pair<int,int>&addd,pair<int,int>&b){
    return addd.second<b.second;
}

void hello(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    int t=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++){cin>>b[i];t=max(t,b[i]);}
    if(t==n){
        sort(b.begin(),b.end());
        for(auto &it:b)cout<<it<<" ";
        cout<<"\n";
        return;
    }
    int pt=n-t;
    sort(b.begin()+pt,b.end());
    for(auto &it:b)cout<<it<<" ";
        cout<<"\n";
        // return;
    
}

int main() {
	FastIO();
	// int nunnu;
	// cin>>nunnu;
	// while(nunnu--){
	//     hello();
	// }
    string ans="ravi";
    cout<<ans.substr(4)+ans;
	return 0;
}