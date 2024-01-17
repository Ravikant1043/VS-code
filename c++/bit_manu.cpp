#include<iostream>
using namespace std;
int getBit(int a,int pos){
    return (a&(1<<pos))!=0;
}

int setBit(int a,int pos){
    return (a|(1<<pos));
}

int clearBit(int a,int pos){
    int m=~(1<<pos);
    return a&m;
}

bool ispowerof2(int a){
    return (a&a-1);
}


int number_of_bits(int n){
    int t=0;
    while(n){
        n=n&n-1;
        t++;
    }
    return t;
}
int main()
{
    int n;

    //getting the value of the bit at the specified position
    //cout<<getBit(5,2)<<endl;    
    
    //setting a bit at the specified position
    // cout<<setBit(5,1)<<endl;   


    //for clearing the bit at the specified position
    // cout<<clearBit(5,1)<<endl;


    // if n is a power of 2 then it has only one set bit, if it is operated '&' ncrwith n-1 then it will retturn always 0

    cin>>n;

    // if(ispowerof2(n)){
    //     cout<<"the given number is not a power of 2"<<endl;
    // } 
    // else{
    //     cout<<"number is a power of 2"<<endl;
    // }

    cout<<number_of_bits(n)<<endl;

    
    return 0;
}