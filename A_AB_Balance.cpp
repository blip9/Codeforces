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
    int ab = 0, ba = 0;
    int n = str.size();
    for (int i = 1; i < n; i++)
    {
        if (str[i] == 'a' && str[i - 1] == 'b')
            ba++;
        else if (str[i] == 'b' && str[i - 1] == 'a')
            ab++;
    }
    if (ab > ba || ba > ab)
    {
        if (str.back() == 'a')
            str[n - 1] = 'b';
        else
            str[n - 1] = 'a';
    }
    cout << str << endl;
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