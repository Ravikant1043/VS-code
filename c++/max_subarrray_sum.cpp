// use the kadane's algorithm on the array after reversing their signs and the sremove that element form the sum of all the total array or print the max of the simple kadane's algorithm and the newer one



#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int current[n+1];
    current[0]=1;
    for(int i=0;i<=n;i++)
    current[i]=current[i-1]+arr[i-1];

    int maxsum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=current[i]-current[j];
            maxsum=max(maxsum,sum);
        }
    }

    cout<<maxsum<<endl;
    return 0;
}


// kadanes algorithm

/*
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int maxsum=INT_MIN,currentsum=0;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }

    cout<<maxsum<<endl;
}

*/