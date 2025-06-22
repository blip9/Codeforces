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
    int cnt = 0;
    vector<int> arr(n);
    int zcnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (!arr[i])
            zcnt++;
    }
    for (int i = 0; i < n;)
    {
        if (arr[i] != 0)
        {
            cnt++;
            while (i < n && arr[i] != 0)
                i++; // skip the entire block
        }
        else
        {
            i++;
        }
        }

    if (zcnt == n)
        cout << 0 << endl;
    else if (cnt == 1)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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