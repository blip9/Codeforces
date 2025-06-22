#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int n;
    char c;
    cin >> n >> c;

    string str;
    cin >> str;

    str += str;

    vector<int> next_g(2 * n, -1);
    int last_g = -1;

    for (int i = 2 * n - 1; i >= 0; --i)
    {
        if (str[i] == 'g')
            last_g = i;
        next_g[i] = last_g;
    }

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == c && next_g[i] != -1)
        {
            ans = max(ans, next_g[i] - i);
        }
    }

    cout << ans << "\n";
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
