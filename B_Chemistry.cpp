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
    string str;
    cin >> str;
    unordered_map<int, int> mp;
    for (auto i : str)
        mp[i]++;
    int cnt = 0;
    int maxe = 0;
    int sum = 0;
    for (auto i : mp)
    {
        if (i.second & 1)
        {
            cnt++;
            maxe = max(maxe, i.second);
            sum += i.second;
        }
    }
    if (k + 1 >= cnt)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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