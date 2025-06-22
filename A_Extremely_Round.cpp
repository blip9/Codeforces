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
int arr[10000000] = {0};
void fill()
{
    for (int i = 1; i < 10000000; i++)
    {
        int temp = i;
        int cnt = 0;
        while (temp)
        {
            if (cnt > 1)
                break;
            if (temp % 10)
                cnt++;
            temp = temp / 10;
        }
        arr[i] = arr[i - 1];
        if (cnt == 1)
            arr[i]++;
    }
}
void solve()
{
    // Write your solution here
    int n;
    cin >> n;
    cout << arr[n] << endl;
}

int main()
{
    fast_io;
    int t = 1;
    cin >> t;
    fill();
    while (t--)
    {

        solve();
    }
    return 0;
}