#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        int newk = abs(k);
        if (newk / p >= n)
        {
            if (newk / p == n && newk % p != 0)
            {
                cout << -1 << endl;
                continue;
            }

            else if (newk / p > n)
            {
                cout << -1 << endl;
                continue;
            }
        }

        if (newk % p == 0)
        {
            cout << newk / p << endl;
        }
        else
        {
            cout << newk / p + 1 << endl;
        }
    }
}