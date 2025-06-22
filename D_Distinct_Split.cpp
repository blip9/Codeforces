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
    string str;
    cin >> str;
    vector<int> freq(26, 0), suf(26, 0);
    for (auto i : str)
        freq[i - 'a']++;
    int ans = 0;
    for (auto i : str)
    {
        freq[i - 'a']--;
        suf[i - 'a']++;

        int cur = 0;
        for (int i = 0; i < 26; i++)
        {
            cur += min(1, freq[i]) + min(1, suf[i]);
        }
        ans = max(cur, ans);
    }
    cout << ans << "\n";
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