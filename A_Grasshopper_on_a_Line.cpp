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
    int x, k;
    cin >> x >> k;
    if (x % k)
    {
        cout << 1 << endl;
        cout << x << endl;
    }
    else
    {
        cout << 2 << endl;
        if (x > 0)
            cout << x - 1 << " " << 1 << endl;
        else
            cout << x + 1 << " " << 1 << endl;
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