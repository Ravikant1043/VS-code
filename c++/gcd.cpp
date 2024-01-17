#include<iostream>
using namespace std;


// gcd without recursion 
int gcd(int n,int hello){
    while(hello!=0){
        int rem=n%hello;
        n=hello;
        hello=rem;
    }
    return n;
}
int main()
{
    // int n,m;
    // cin>>n>>m;

    // cout<<gcd(n,m)<<endl;
    int n,d;
    cin>>n>>d;
    try{
        if(d==0){
            throw 1;
        }
        else cout<<"bye";
    }
    catch(const char *s){
        cout<<s<<endl;}
    catch(int s){
        cout<<s<<endl;}
}