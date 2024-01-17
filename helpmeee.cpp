#include<bits/stdc++.h>
using namespace std;
// bool isprime(int a){
//     int 
// }
int hello(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    unordered_map<int,int>m;
    for(auto &it:a){
        int p=it;
        while(p%2==0){
            p/=2;
            m[2]++;
        }
        for(int i=3;i<=sqrt(p);i++){
            while(p%i==0){
                p/=i;
                m[i]++;
            }
        }
        if(p>2)m[p]++;
    }
    int ans=1;
    for(auto &it:m){
        ans*=(it.second+1);
    }
    cout<<ans;
}
int main(){
    // int n=25;
    // int a[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,  47, 53, 59, 61, 67, 71, 73, 79, 83, 89 , 97};
    // // 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199,
    // // 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293,
    // // 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397,
    // // 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499};
    // int ans=0;
    // for(int i=0;i<n-2;i++){
    //     for(int j=i+1;j<n-1;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(a[i]+a[j]==a[k]){ans++;
    //             cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<"\n";
    //             }
    //         }
    //     }
    // }
    // cout<<ans<<endl;
    hello();
}
// lack of confidence