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
const long long INF = 1e18;

void solve()
{
    long long n;
    cin >> n;

    int cnt = 0;
    for (ll i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            cnt++;
        }
        else
            break;
    }
    cout << cnt << endl;
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
