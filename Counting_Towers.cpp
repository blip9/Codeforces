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

long long f(int row, int k, int n, vector<vector<int>> &dp)
{
    if (row == n)
        return 1;

    if (dp[row][k] != -1)
        return dp[row][k];

    long long ways = 0;
    if (k)
    {
        ways += ((4LL * f(row + 1, k, n, dp)) % MOD + f(row + 1, !k, n, dp)) % MOD;
    }
    else
    {
        ways += ((2LL * f(row + 1, k, n, dp)) % MOD + f(row + 1, !k, n, dp) % MOD) % MOD;
    }
    return dp[row][k] = ways;
}
void solve()
{
    // Write your solution here
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(2, -1));
    f(1, 0, n, dp);
    f(1, 1, 1000000, dp);
}

int main()
{
    fast_io;
    int t = 1;
    cin >> t;
    vector<vector<long long>> dp(1000001, vector<long long>(2, 0));
    dp[1][0] = 1;
    dp[1][1] = 1;
    int N = 1000000;
    for (int i = 2; i <= N; i++)
    {
        dp[i][0] = ((2LL * dp[i - 1][0]) % MOD + dp[i - 1][1]) % MOD;
        dp[i][1] = ((4LL * dp[i - 1][1]) % MOD + dp[i - 1][0]) % MOD;
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << (dp[n][0] + dp[n][1]) % MOD << endl;
    }
    return 0;
}