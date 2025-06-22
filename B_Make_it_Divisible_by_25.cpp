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
    long long n;
    cin >> n;
    string sn = to_string(n);
    reverse(sn.begin(), sn.end());
    int ans = sn.size();
    vector<string> st = {"57", "05", "00", "52"};
    for (auto i : st)
    {
        if (n % 25 == 0)
        {
            ans = 0;
            break;
        }
        int j = 0;
        int k = 0;
        for (k; k < sn.size(); k++)
        {
            if (j > 1)
                break;
            if (sn[k] == i[j])
            {
                j++;
            }
        }
        ans = min(ans, k - 2);
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