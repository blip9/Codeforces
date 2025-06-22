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

bool canAttack(int a, int b, int knightX, int knightY, int targetX, int targetY)
{
    vector<pair<int, int>> moves = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

    for (auto move : moves)
    {
        int newX = knightX + move.first;
        int newY = knightY + move.second;
        if (newX == targetX && newY == targetY)
        {
            return true;
        }
    }

    return false;
}
void solve()
{
    // Write your solution here
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;

    int cnt = 0;
    vector<pair<int, int>> moves = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};
    set<pair<int, int>> used;
    for (auto i : moves)
    {
        int nxk = xk + i.first;
        int nyk = yk + i.second;
        if (canAttack(a, b, nxk, nyk, xq, yq) && used.find({nxk, nyk}) == used.end())
        {
            used.insert({nxk, nyk});
            cnt++;
        }
    }
    cout << cnt << endl;
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