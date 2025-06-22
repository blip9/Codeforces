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
    int cnt1 = 0, cntm1 = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
        if (arr[i] == -1)
            cntm1++;
        else
            cnt1++;
    }
    int ans = 0;
    if (cntm1 > cnt1)
    {
        ans += (cntm1 - cnt1 + 1) / 2;
        cnt1 += ans;
        cntm1 -= ans;
    }
    if (cntm1 % 2)
        ans++;

    cout << ans << endl;
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