#include <iostream>
using namespace std;
void primefactor_seive(int n)
{
    int spf[100];
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                if (spf[i] == i)
                    spf[j] = i;
            }
        }
    }
    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}

int main()
{
    int n;
    cin >> n;

    primefactor_seive(n);
}