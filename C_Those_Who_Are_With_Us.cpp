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
    int x, y;
    cin >> x >> y;
    vector<vector<int>> mat(x, vector<int>(y));
    int maxe = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> mat[i][j];
            maxe = max(maxe, mat[i][j]);
        }
    }
    vector<int> c(y, 0);
    vector<int> r(x, 0);
    int cnt = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (mat[i][j] == maxe)
            {
                c[j]++;
                r[i]++;
                cnt++;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (c[j] + r[i] - (mat[i][j] == maxe) >= cnt)
            {
                cout << maxe - 1 << "\n";
                return;
            }
        }
    }

    cout << maxe << "\n";
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