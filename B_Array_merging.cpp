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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int prev = a[0];
    int cnt = 1;
    unordered_map<int, int> mp;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == prev)
        {
            cnt++;
        }
        else
        {
            mp[prev] = max(mp[prev], cnt);
            ans = max(ans, cnt);
            cnt = 1;
            prev = a[i];
        }
    }
    mp[prev] = max(mp[prev], cnt);

    prev = b[0];
    cnt = 1;
    unordered_map<int, int> mpb;
    for (int i = 1; i < n; i++)
    {
        if (b[i] == prev)
        {
            cnt++;
        }
        else
        {
            mpb[prev] = max(mpb[prev], cnt);
            ans = max(ans, cnt);
            cnt = 1;
            prev = b[i];
        }
    }
    mpb[prev] = max(mpb[prev], cnt);

    for (int i = 1; i < 2 * n + 1; i++)
    {
        ans = max(mp[i] + mpb[i], ans);
    }

    cout << ans << "\n";
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