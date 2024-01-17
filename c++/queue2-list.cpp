#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int x){
        val=x;
        next=NULL;
    }
};

class queue{
    node* front;
    node* back;

    public:
    queue(){
        front=NULL;
        back=NULL;
    }

    void push(int x){
        node *t=new node(x);

        if(front==NULL){
            front =t;
            back=t;
        }
        else{
            back->next=t;
            back=t;
        }
    }

    void pop(){
        node *t;
        if(front ==NULL){
            cout<<"no nodes"<<endl;
            return ;
        }
        t=front;
        front=front->next;
        delete t;
    }

    int peek(){
        if(front ==NULL){
            cout<<"no nodes"<<endl;
            return -1;
        }
        return front->val;
    }

    bool empty(){
        if(front==NULL)
        return true;
        return false;
    }

};

int main(){
    queue q;
    q.push(2);
    q.push(34);
    cout<<q.peek()<<endl;
    cout<<q.empty();
    return 0;
}