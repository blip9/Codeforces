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
    vector<int> arr(n);
    int mine = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0 && arr[i - 1] > arr[i])
            mine = 0;
    }
    for (int i = 1; i < n; i++)
    {
        mine = min(mine, abs(arr[i] - arr[i - 1]) / 2 + 1);
    }
    cout << mine << endl;
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