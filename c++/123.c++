#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1,y=1;
    cout<<x<<" "<<y<<" ";
    if(n>=2){while(n!=2){
        int t=y;
        y+=x;
        x=t;
        cout<<y<<" ";
        n--;}
    }
    return 0;
}