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
    long long a, b, n;
    cin >> a >> b >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];
    long long ans = b - 1LL;
    b = 1LL;
    for (auto i : t)
    {
        if (i + 1LL > a)
            i = a - 1;
        ans += i;
    }
    ans++;  
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