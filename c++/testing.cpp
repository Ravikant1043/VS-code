#include <bits/stdc++.h>
using namespace std;

int max_profit(vector<vector<int>> events) {
    int n = events.size();
    sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });
    vector<int> dp(n);
    dp[0] = events[0][2];
    for (int i = 1; i < n; i++) {
        int lo = 0, hi = i-1, j = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (events[mid][1] <= events[i][0]) {
                if (mid+1 < i && events[mid+1][1] <= events[i][0]) {
                    lo = mid + 1;
                } else {
                    j = mid;
                    break;
                }
            } else {
                hi = mid - 1;
            }
        }
        if (j == -1) {
            dp[i] = max(dp[i-1], events[i][2]);
        } else {
            dp[i] = max(dp[j] + events[i][2], dp[i-1]);
        }
    }
    return dp[n-1];
}
int minimumSum(string s) {
        // code here
        int n=s.size();
        // cout<<n;
        int i=0,ans=0;
        int j=n-1;
        if(n&1)return -1;
        char p='-';
        while(i<n/2){
            if(s[i]=='?' && s[j]=='?'){
                cout<<i<<j<<"\n";
                i++;j--;
                continue;
            }
            else if(s[i]=='?' && s[j]!='?'){
                if(p!='-'){
                ans+=((abs(p-s[j])));
                // cout<<p<<" "<<s[i]<<"    ";
                cout<<(abs(p-s[j]))<<" 1    ";}
                p=s[j];
            }
            else if(s[j]=='?' && s[i]!='?'){
                if(p!='-'){
                ans+=((abs(s[i]-p)));
                cout<<(abs(p-s[i]))<<" 2    ";}
                p=s[i];
            }
            else if(s[i]==s[j]){ans+=(abs(p-s[i]));p=s[i];}
            else if(s[i]!=s[j]) return -1;

            i++;j--;
            // cout<<p<<" ";
        }
        // cout<<i<<"      ";
        return 2*ans;
    }

int main() {
    // int t[5]={0,0,0,1,1};
    vector<int>t(5,1);
    t[0]=0;
    t[1]=0;
    cout<<lower_bound(t.begin(),t.end(),1)-t.begin();
    return 0;
}