#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    // Write your solution here
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r, k;
        cin >> l >> r >> k;
        l--;
        r--;
        long long sum = (l > 0 ? a[l - 1] : 0) + (r - l + 1) * k + a[n - 1] - a[r];
        if (sum & 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}