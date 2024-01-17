#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n]={0};
    int m=n;

    int row_st=0,row_en=n-1,col_st=0,col_en=m-1;
    n=n*n;
    while(row_st<=row_en &&col_st<=col_en){
        // for(int i=col_st;i<=col_en;i++){
        //     a[row_st][i]=n;n--;
        // }
        // row_st++;

        // for(int i=row_st;i<=row_en;i++){
        //     a[i][col_en]=n;n--;
        // }
        // col_en--;

        // for(int i=col_en;i>=col_st;i--){
        // a[row_en][i]=n;n--;
        // }
        // row_en--;

        // for(int i=row_en;i>=row_st;i--){
        // a[i][col_st]=n;n--;
        // }
        // col_st++;

        // for(int i=col_en;i>=0;i--){
        //     a[row_st][i]=n;n--;
        // }
        // row_st++;
        // for(int i=row_st;i<=row_en;i++){
        //     a[i][col_en]=n;n--;
        // }
        // col_en--;
        // for(int i=)
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}