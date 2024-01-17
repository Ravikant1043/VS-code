#include<iostream>
#include<stack>
using namespace std;
class queue{
    public:
    stack<int> q;
    stack<int> q1;
    void push(int x){
        int t=x;
        if(!q.empty()){
            while(!q1.empty()){
                q.push(q1.top());
                q1.pop();
            }
        }
        q.push(t);
        while(!q.empty())
        {
            q1.push(q.top());
            q.pop();
        }
    }
    void pop(){
        q.pop();
    }

    int topp(){
        return q.top();
    }
};
int main(){
    queue s;
    s.push(78);
    s.push(45);
    cout<<s.topp();
    s.pop();
}