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
    int a, b, c;
    cin >> a >> b >> c;

    int na = b - (c - b);
    int nb = a + (c - a) / 2;
    int nc = b + (b - a);

    if ((na > a && na % a == 0 && na != 0) || ((c - a) % 2 == 0 && nb > b && nb % b == 0 && nb != 0) || (nc > c && nc % c == 0 && nc != 0) || (b - a == c - b))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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