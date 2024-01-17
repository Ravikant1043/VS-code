#include<bits/stdc++.h>
using namespace std;

void hello(vector<string> &ss,string str,int len,int open,int close){
    if(open==len && close==len){
        ss.push_back(str);
        // cout<<str<<" ";
        return ;
    }
    if(open<len){
        str+="(";
        hello(ss,str,len,open+1,close);
        str.pop_back();
    }
    if(close<open){
        str+=")";
        hello(ss,str,len,open,close+1);
        str.pop_back();
    }
}

int main(){
    int n;
    cin>>n;
    // string str;
    // cin>>str;
    vector<string>ss;
    hello(ss,"",n,0,0);
    for(auto &i:ss)cout<<i<<" ";
}