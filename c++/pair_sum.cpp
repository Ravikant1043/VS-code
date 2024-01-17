#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];


    int i=0,j=n-1;
    while(i<j){
        if (a[j]+a[i]==s){
            cout<<i<<" "<<j;
            return 0;
        }
        else if(a[j]+a[i]>s){
            j--;
        }
        else
        i++;
    }
    cout<<-1<<endl;
    return 0;
}