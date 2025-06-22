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
    string str, req;
    cin >> str >> req;

    unordered_map<char, int> mp;
    for (auto i : str)
        mp[i]++;
    unordered_map<char, int> reqp;

    for (auto i : req)
        reqp[i]++;

    for (auto i : reqp)
    {
        if (i.second > mp[i.first])
        {
            cout << "NO" << endl;
            return;
        }
    }
    unordered_map<char, vector<int>> imp;
    for (int i = 0; i < str.size(); i++)
    {
        imp[str[i]].push_back(i);
    }
    int prev = INT_MAX;
    reverse(req.begin(), req.end());
    for (auto i : req)
    {
        if (!imp.empty() && imp[i].back() < prev)
        {
            prev = imp[i].back();
            imp[i].pop_back();

            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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