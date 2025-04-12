#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (s[0] < s[n - 1])
        {
            cout << "YES" << endl;
            continue;
        }

        if (n == 1 || k == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        bool found = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] < s[n - 1] || s[i] > s[n - 1])
            {
                cout << "YES" << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}