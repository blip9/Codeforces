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
    int ans = INT_MAX;

    for (int i = k; i < k + 30; i++)
    {
        if (i == 1)
            continue;
        int curr = i - k;
        int temp = n;
        while (temp > 0)
        {
            temp = temp / i;
            curr++;
        }
        ans = min(curr, ans);
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