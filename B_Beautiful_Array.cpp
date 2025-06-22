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
    long long n, k, b, s;
    cin >> n >> k >> b >> s;

    vector<long long> arr(n);
    arr[0] = b * k;
    s -= arr[0];
    if (s < 0)
        cout << -1 << "\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] += min(k - 1, s);
            s = max(1LL * 0, s - k + 1);
        }
        if (s > 0)
            cout << -1;
        else
            for (auto i : arr)
                cout << i << " ";
        cout << endl;
    }
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