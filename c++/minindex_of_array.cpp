/*Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.*/

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    const int N = 1e7;
    int idx[N];
    for (int i = 0; i < N; i++)
        idx[i] = -1;

    int minindex = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            min(idx[a[i]], minindex);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minindex == INT_MIN)
    {
        cout << "-1" << endl;
    }
    cout << minindex + 1;
    return 0;
}
