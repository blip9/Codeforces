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
    int n, k;
    cin >> n >> k;
    int even = 0;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        int rem = temp % k;
        if (!(temp & 1))
            even++;
        if (!rem)
            ans = 0;
        ans = min(ans, k - rem);
    }

    if (k == 4 && n > 1 && ans)
    {
        if (even > 1)
            ans = 0;
        else
            ans = min(2 - even, ans);
    }
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