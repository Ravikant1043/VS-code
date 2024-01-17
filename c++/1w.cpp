#include<iostream>
#include<math.h>
using namespace std;

class A{
    public:
    friend class C;
    private:
    class B{
        public:
        int a,b;
        B(int a,int b){
            this->a=a;
            this->b=b;
        }
        void display(){
            cout<<this->a<<" "<<this->b;
        }
    }
};
class C{
    public:
    void t(){
        cout<<"ravikant"<<endl;
    }
};

int main(){
    int t=10;
    string d=to
    return 0;
}