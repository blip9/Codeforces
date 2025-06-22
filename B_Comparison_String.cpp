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
    string str;
    cin >> str;
    int cnt = 1;
    int maxe = 1;
    if (n == 1)
    {
        cout << 2 << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
        {
            cnt++;
            maxe = max(maxe, cnt);
        }
        else
        {
            cnt = 1;
        }
    }

    cout << maxe + 1 << endl;
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