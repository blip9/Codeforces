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
    int freq[2] = {0, 0};
    for (auto i : str)
    {
        freq[i - '0']++;
    }
    int cnt = 0;
    for (auto i : str)
    {
        if (!freq[!(i - '0')])
        {
            cout << str.size() - cnt << "\n";
            return;
        }
        freq[!(i - '0')]--;
        cnt++;
    }
    cout << str.size() - cnt << "\n";
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