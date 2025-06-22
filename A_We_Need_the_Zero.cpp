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
    int xors = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[i] = temp;
        xors = xors ^ temp;
    }
    int fxors = 0;
    for (auto i : a)
    {
        fxors ^= i ^ xors;
    }
    if (!fxors)
        cout << xors << endl;
    else
        cout << -1 << endl;
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