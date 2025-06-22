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
    int n, d;
    cin >> n >> d;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p.begin(), p.end());

    int l = 0, r = n - 1;
    int cnt = 0;
    while (l <= r)
    {
        int curr = p[r];
        while (l < r && d >= curr)
        {
            curr += p[r];
            l++;
        }
        if (curr > d)
            cnt++;

        r--;
    }
    cout << cnt << "\n";
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