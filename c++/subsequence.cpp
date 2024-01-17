#include<iostream>
using namespace std;

void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string r=s.substr(1);
    substring(r,ans+ch);
    substring(r,ans);

}
void subss(string s,int i,string ss){
    if(i>=s.size()){
        cout<<ss<<"\n";
        return;
    }
    for(int i=0;i<s.size();i++){
        subss(s,i+1,ss+s[i]);
        subss(s,i+1,ss);
    }
}
int main()
{
    string s;
    cin>>s;
    // substring(s,"");
    subss(s,0,"");
    // cout<<(1<<5);
    return 0;
}