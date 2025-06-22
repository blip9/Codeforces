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
    vector<int> c(n), b;
    for (int i = 0; i < n; i++)
        cin >> c[i];
    sort(c.rbegin(), c.rend());

    if (c[0] == c.back())
    {
        cout << -1 << endl;
        return;
    }
    int temp = c.back();
    while (temp == c.back())
    {
        b.push_back(temp);
        c.pop_back();
    }

    cout << b.size() << " " << c.size() << endl;
    for (auto i : b)
        cout << i << " ";
    cout << endl;
    for (auto i : c)
        cout << i << " ";
    cout << endl;
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