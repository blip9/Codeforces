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
    int n, x;
    cin >> n >> x;
    long long maxs = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        maxs += ceil((double)temp / (double)x);
        sum += temp;
    }
    cout << (long long)ceil((double)sum / (double)x) << " " << maxs << endl;
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