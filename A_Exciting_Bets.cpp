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
    long long a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    long long diff = abs(a - b);
    long long mine = min(a % diff, b % diff);
    mine = min(mine, diff - mine);
    cout << diff << " " << mine << endl;
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