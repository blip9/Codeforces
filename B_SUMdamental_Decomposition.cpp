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
    int n, x;
    cin >> n >> x;
    int k = __builtin_popcount(x);
    if (k >= n)
    {
        cout << x << endl;
        return;
    }
    else if ((n - k) % 2 == 0)
    {
        cout << x + (n - k) << endl;
    }
    else
    {
        if (x > 1)
        {
            cout << x + (n - k + 1) << endl;
            return;
        }
        if (x == 1)
        {
            cout << n + 3 << endl;
        }
        else
        {
            if (n == 1)
                cout << -1 << endl;
            else
                cout << n + 3 << endl;
        }
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