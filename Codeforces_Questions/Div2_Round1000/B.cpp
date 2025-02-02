#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> nums;

        l--;
        r--;

        priority_queue<int, vector<int>, greater<int>> pq;
        priority_queue<int, vector<int>, greater<int>> pq2;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i >= l)
            {
                pq.push(x);
            }

            if (i <= r)
            {
                pq2.push(x);
            }
        }

        int sum = 0;
        int sum2 = 0;

        for (int i = 0; i < (r - l + 1); i++)
        {
            sum += pq.top();
            pq.pop();
        }

        for (int i = 0; i < (r - l + 1); i++)
        {
            sum2 += pq2.top();
            pq2.pop();
        }

        cout << min(sum, sum2) << endl;
    }
}
