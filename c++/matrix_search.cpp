#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, search;
    cin >> n >> m;
    int a[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    }

    cin >> search;
    bool flag = false;
    int r = 0, c = m - 1;
    while (r < n && c >= 0)
    {
        if (a[r][c] == search)
        {
            flag = true;
        }
        if (a[r][c] > search)
            c--;
        else
            r++;
    }
    if (flag == true)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element doesn't exist" << endl;
    }
    return 0;
}