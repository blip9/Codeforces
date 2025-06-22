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

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    int x;
    cin >> x;

    vector<int> a(x), b(x);
    for (int i = 0; i < x; i++)
        cin >> a[i];
    for (int i = 0; i < x; i++)
        cin >> b[i];

    vector<pair<int, int>> ops;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j + 1 < x; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                ops.pb({1, j + 1});
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j + 1 < x; j++)
        {
            if (b[j] > b[j + 1])
            {
                swap(b[j], b[j + 1]);
                ops.pb({2, j + 1});
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        if (a[i] >= b[i])
        {
            swap(a[i], b[i]);
            ops.pb({3, i + 1});
        }
    }

    cout << ops.size() << "\n";
    for (auto &it : ops)
        cout << it.F << " " << it.S << "\n";
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
