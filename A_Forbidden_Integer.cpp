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
    int x, k, n;
    cin >> n >> k >> x;
    vector<int> ans;
    for (int i = 1; i <= min(2, k); i++)
    {
        if (i == x)
            continue;
        while (n > k || n == x)
        {
            ans.push_back(i);
            n = n - i;
        }
        if (n <= k && n > 0)
        {
            ans.push_back(n);
            n = 0;
            break;
        }
    }
    if (n != 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
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