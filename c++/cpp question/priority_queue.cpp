#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int>t;
    priority_queue<int, vector<int>, greater<int> >t;
    // priority_queue
    t.push(18); 
    t.push(99);
    t.push(89);
    // cout<<t.poll();
    t.pop();
    cout<<"\n"<<t.top();  
    return 0;
}