#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        int cDash = 0;
        int cBigD = 0;

        for (auto i : s)
        {
            if (i == '-')
                cDash++;
            else
                cBigD++;
        }

        if (cBigD < 1 || cDash < 2)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = 1;
        ans *= cBigD;
        ans *= cDash / 2;

        if (cDash % 2 != 0)
        {
            ans *= (cDash / 2 + 1);
        }
        else
        {
            ans *= cDash / 2;
        }
        cout << ans << endl;
    }

    return 0;
}