
// // Sieve of Eratosthenes

// #include <iostream>
// using namespace std;

// void primeSieve(int n)
// {
//     int prime[400] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         if (prime[i] == 0)
//         {
//             for (int j = i + i; j <= n; j += i)
//             {
//                 prime[j]++;
//             }
//         }
//     }
//     int a[6]={19,12,14,6,10,18};
//     for(int i=0;i<6;i++)cout<<prime[a[i]]<<" ";
//     // cout<<prime[300];
//     return;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     primeSieve(n);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int mmm(){
    // int n;
    // cin>>n;
    // vector<int> a[n+1];
    // int l=log2(n);
    // for(int i=1;i<=n;i++){
    //     int t=i;
    //     for(int j=0;j<=l;j++){
    //         if((t&(1<<j))==0){
    //             t|=(1<<j);
    //             for(int k=0;k<=l;k++){
    //                 if((t&(1<<k))==0){
    //                     t|=(1<<k);
    //                     a[i].push_back(t);
    //                     a[t].push_back(i);
    //                     t=(~(~t|(1<<k)));
    //                 }
    //             }
    //             t=(~(~t|(1<<j)));
    //         }
    //     }
    // }
    // for(auto &it:a){
    //     for(auto &i:it)cout<<i<<" ";
    //     cout<<"\n";
    // }
    
    bitset<32> a(70);
    cout<<a<<" "<<endl;
}

// int n=1;
// for(int i=0;i<5;i++){
//     // if(n&(1<<i)){
//     // for(int j=i+1;j<5;j++){
//     //     if()
//     // }}

//     if((n&(1<<i))==0){
//         n|
//     }
// }
