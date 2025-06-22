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
    unordered_map<int, int> mp;
    int maxe = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
        maxe = max(maxe, mp[temp]);
    }
    int ans = n - maxe;
    int rem = n - maxe;
    while (rem > 0)
    {
        ans++;
        rem = rem - maxe;
        maxe += maxe;
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