#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

// spiral order printing
    int row_st=0,row_en=n-1,col_st=0,col_en=m-1;

    while(row_st<=row_en &&col_st<=col_en){

        // for row starting
        for(int i=col_st;i<=col_en;i++){
            cout<<a[row_st][i]<<" ";
        }
        row_st++;

        // for column starting
        for(int i=row_st;i<=row_en;i++){
            cout<<a[i][col_en]<<" ";
        }
        col_en--;

        // for row end
        for(int i=col_en;i>=col_st;i--)
        cout<<a[row_en][i]<<" ";

        row_en--;

        // for column end
        for(int i=row_en;i>=row_st;i--)
        cout<<a[i][col_st]<<" ";

        col_st++;
    }

}