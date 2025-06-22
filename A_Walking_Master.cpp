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
    int xi, yi, xf, yf;
    cin >> xi >> yi >> xf >> yf;
    if (yf < yi)
    {
        cout << -1 << endl;
        return;
    }
    int ans = 0;
    ans += abs(yf - yi);
    if (xf > xi + ans)
    {
        cout << -1 << endl;
        return;
    }
    ans += (xi + ans) - xf;
    cout << ans << endl;
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