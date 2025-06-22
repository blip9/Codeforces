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
    string str;
    cin >> str;
    int n = str.size();
    int one = 0;
    for (auto i : str)
        if (i == '1')
            one++;

    int zero = n - one;
    if (min(one, zero) % 2)
    {
        cout << "DA" << endl;
    }
    else
        cout << "NET" << endl;
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