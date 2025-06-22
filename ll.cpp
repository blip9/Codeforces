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
    unordered_map<string, int> mp;
    unordered_map<string, int> time;
    int maxe = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int val;
        cin >> val;
        mp[str] += val;
        maxe = max(mp[str], maxe);
        time[str] = i;
    }
    string ans = "";
    int lqt = INT_MAX;
    for (auto i : mp)
    {
        if (i.second == maxe)
        {
            if (lqt > time[i.first])
            {
                lqt = time[i.first];
                ans = i.first;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}