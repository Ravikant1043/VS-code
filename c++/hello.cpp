#include<bits/stdc++.h>
using namespace std;
int fu(char* input){
    
    bool t=true;
    for(int i=0;i<n;i++){
        if(input1[i]=='.'){
            if(i+3<=n)
                t=false;
            if(input1[i+1]=='c' && input1[i+2]=='o'&& input1[i+3]=='m'){
                t=t;
            }
            else t=false;
            break;
        }
        else if(input1[i]=='@'){

            if((input1[i+1]=='w' && input[i+2]=='i' && input[i+3]=='p' && input[i+4]=='r' && input[i+5]=='o')
            || (input1[i+1]=='g' && input[i+2]=='m' && input[i+3]=='a' && input[i+4]=='i' && input[i+5]=='l')
            || (input1[i+1]=='y' && input[i+2]=='a' && input[i+3]=='h' && input[i+4]=='o' && input[i+5]=='o')){
                t=t;
            }
            else t=false;
            i+=6;
        }
        else {
            if((input1[i]>=a && input1[i]<=z) || (input1[i]>=0 && input1[i]<=9))t=t;
            else t=false
        }
    }
    
    if()
}
int main(){
    // char[9]={'a','e'}
        string input1;
        cin>>input1;
    int ans=0;
    for(int i=0;i<input.size();i++){
        if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u')ans++;
    }
    cout<<ans;
    // cout<<fu(s);
}

// __W32API_VERSION
wipro.com
gmail.com
yahoo.com