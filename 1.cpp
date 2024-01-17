#include<bits/stdc++.h>
using namespace std;
// int help(vector<vector<int>>& ho,int i,int &n,int pre,vector<vector<int>>& dp){
//         if(i>=n)return 0;
//         int t=0;
//         int nt=0;
//         if(dp[i+1][pre+1]!=-1)return dp[i+1][pre+1];
//         if(pre==-1 || ho[i][0]>ho[pre][1]){
//             t=ho[i][2]+help(ho,i+1,n,i,dp);
//         }
//         nt=help(ho,i+1,n,pre,dp);
//         return dp[i+1][pre+1]=max(t,nt);
//     }
//     int maximizeTheProfit(int n, vector<vector<int>>& offers) {
//         vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
//         sort(offers.begin(),offers.end());
//         return help(offers,0,n,-1,dp);
//     }

// typedef long long ll;

// ll f(ll n,vector<ll>&a){
//     if(n<=1)return n;
//     if(a[n]!=-1)return a[n];
//     return a[n]=f(n-1,a)+f(n-2,a);
// }
// // int main(){
// //     ll n;
// //     cin>>n;
// //     vector<ll>a(n,-1);
// //     cout<<f(n-1,a);
// //     return 0;
// // }
vector<int> getans(){
    string s;
    getline(cin,s);
    string st="";
    vector<int> ans;
    for(auto &it:s){
        if(it==' '){
            ans.push_back(stoi(st));
            st="";
        }
        else{
            st+=it;
        }
    }
    return ans;
}
int main(){
    // string s;
    // cin>>s;
    // reverse(s.begin(),s.end());
    // cout<<s;
    // vector<int> a(10);
    // vector<int> b=getans();
    // lambda function also needs the parameter just like the normal functions in cpp::
    // auto write=[](vector<int> &b){
    //     return 10;
    // };
    // cout<<write(b);
    int n,k;cin>>n>>k;
    for(int i=0;i<=n;i++){
        cout<<(i%k)*((n-i)%k)<<" ";
    }
}
// //  0 1 1 2

// // You can find general documentation for Flutter at: https://docs.flutter.dev/
// // Detailed API documentation is available at: https://api.flutter.dev/
// // If you prefer video documentation, consider: https://www.youtube.com/c/flutterdev



// // rbkantsharma@gmail.com
