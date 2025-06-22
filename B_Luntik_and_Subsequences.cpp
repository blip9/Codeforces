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
    long long zero = 0;
    long long one = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 0)
            zero++;
        if (temp == 1)
            one++;
    }
    if ((!zero && !one) || !one)
    {
        cout << 0 << endl;
        return;
    }
    if (zero > 0)
        zero = (1LL << (zero));
    if (zero > 0)
        cout << one * zero << endl;
    else
        cout << one << endl;
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