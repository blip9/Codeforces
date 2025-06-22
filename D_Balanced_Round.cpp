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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = 0;
    int prev = arr[0];
    int ans = 1;
    int cnt = 0;
    sort(arr.begin(), arr.end());
    while (r < n)
    {
        if (abs(arr[r] - prev) <= k)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            cnt = 1;
        }
        prev = arr[r];
        r++;
    }
    cout << n - ans << endl;
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