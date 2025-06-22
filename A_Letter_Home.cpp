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
    int n, s;
    cin >> n >> s;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    if (s < x[0])
        cout << x.back() - s << endl;
    else if (s > x.back())
        cout << s - x[0] << "\n";
    else
    {
        cout << x.back() - x[0] + min(s - x[0], x.back() - s) << "\n";
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