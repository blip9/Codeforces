#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 || n < 4)
    {
        cout << -1 << endl;
        return;
    }

    // Integer division trick to avoid floating point
    cout << (n + 5) / 6 << " " << (n + 3) / 4 << endl;
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
