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

    int n, a, b;
    cin >> n >> a >> b;
    if (n == 1)
    {
        if (a == 1 && b == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        return;
    }

    if (a + b < n - 1 || (n == a && n == b))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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