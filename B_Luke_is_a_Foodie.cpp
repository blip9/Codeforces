#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;

    int cnt = 0;
    long long low = a[0] - x, high = a[0] + x;

    for (int i = 1; i < n; i++)
    {
        long long l = a[i] - x;
        long long h = a[i] + x;

        low = max(low, l);
        high = min(high, h);

        if (low > high)
        {
            cnt++;
            low = l;
            high = h;
        }
    }

    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
