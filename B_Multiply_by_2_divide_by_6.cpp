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
    int two = 0, three = 0;
    while (n > 1)
    {
        if (n % 3 != 0 && n % 2 != 0)
        {
            cout << -1 << "\n";
            return;
        }
        if (n % 3)
        {
            two++;
            n = n / 2;
        }
        else
        {
            three++;
            n = n / 3;
        }
    }
    if (two > three)
        cout << -1 << "\n";
    else
        cout << three + three - two << "\n";
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