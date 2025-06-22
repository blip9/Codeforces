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
    int n, p;
    cin >> n >> p;
    vector<pair<long long, long long>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
    }
    sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if(a.first==b.first)return a.second>b.second;

        return a.first<b.first; });

    long long cnt = 0;
    long long ind = 0;
    long long cost = 0;
    cnt++;
    cost += p;
    while (cnt < n)
    {
        if (arr[ind].first > p)
            break;
        int temp = min(n - cnt, arr[ind].second);
        cnt += temp;
        cost += temp * arr[ind].first;
        ind++;
    }
    cost += (n - cnt) * p;
    cout << cost << endl;
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