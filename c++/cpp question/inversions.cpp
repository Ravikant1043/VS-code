#include<iostream>
using namespace std;

long long merge(int a[],int l,int m,int r){
    long long inv=0;
    int n1=m-l+1;
    int n2=r-m;
    int aa[n1];
    int bb[n2];
    for(int i=0;i<n1;i++){
        aa[i]=a[i+l];
    }
    for(int i=0;i<n2;i++){
        bb[i]=a[i+m+1];
    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(aa[i]<bb[i]){
            a[k++]=aa[i++];
        }
        else{
            a[k++]=bb[j++];
            inv+=n1-i;
        }
    }
    while(i<n1){
        a[k++]=aa[i++];
    }
    while(j<n2){
        a[k++]=bb[j++];
    }
    return inv;
}



// applying merge sort and counting the number of inversions at the time of mergint the arrays which will provide us the total no of inversions we have
long long merge_sort(int a[],int l,int r){
    long long inv=0;
    if(l<r){
        int m=(l+r)/2;
        inv+=merge_sort(a,l,m);
        inv+=merge_sort(a,m+1,r);
        inv+=merge(a,l,m,r);
    }
    return inv;
}

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long t=merge_sort(a,0,n-1);
    cout<<t<<endl;
}