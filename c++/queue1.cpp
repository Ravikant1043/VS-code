#include<iostream>
using namespace std;

// int n =20;

class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
    arr=new int[10];
    front =-1;
    back=-1;
    }

    void enqueue(int n){
        if(back==n-1){
            cout<<"full"<<endl;
            return ;
        }
        if(front==-1 && back==-1)
        {
            front++;
            back++;
            arr[front]=n;
        }
        else{
            back++;
            arr[back]=n;
        }
    }
    void pop(){
        if(front==-1 ||front>back){
            cout<<"empty"<<endl;
            return ;
        }
        front++;
    }

    int peek(){
        if(front==-1|| front>back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool isempty(){
        return (front>back||front==-1);
    }

};
int main()
{
    queue r;
    cout<<r.isempty()<<endl;

    r.enqueue(3);
    r.enqueue(4);
    r.enqueue(5);
    cout<<r.peek();
    r.pop();
    cout<<r.peek();
    return 0;
}