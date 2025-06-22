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

class FTree
{
    vector<int> arr;

public:
    FTree(int n)
    {
        arr.resize(n + 1, 0);
    }
    FTree(vector<int> vec)
    {
        int n = vec.size();
        arr.resize(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            update(i, vec[i]);
        }
    }
    void update(int ind, int val)
    {
        ind++;
        int n = arr.size();
        while (ind < n)
        {
            arr[ind] += val;
            ind += (ind & -ind);
        }
    }
    int rangeSum(int ind)
    {
        ind++;
        int ans = 0;
        while (ind > 0)
        {
            ans += arr[ind];
            ind -= (ind & -ind);
        }
        return ans;
    }
    int rangeSum(int l, int r)
    {
        return rangeSum(r) - rangeSum(l - 1);
    }
};
void solve()
{
    // Write your solution here
    vector<int> data = {1, 3, 5, 7, 9, 11}; // size = 6
    FTree bit(data);                        // Build Fenwick Tree

    // Print prefix sums
    cout << "Initial prefix sums:\n";
    for (int i = 0; i < data.size(); i++)
    {
        cout << "Sum[0..." << i << "] = " << bit.rangeSum(i) << "\n";
    }

    // Range sum query
    int l = 2, r = 4;
    cout << "\nSum[" << l << "..." << r << "] = " << bit.rangeSum(l, r) << "\n"; // 5 + 7 + 9 = 21

    // Update: add 4 to index 3 (value 7 → 11)
    bit.update(3, 4);
    cout << "\nAfter updating index 3 by +4:\n";
    cout << "Sum[" << l << "..." << r << "] = " << bit.rangeSum(l, r) << "\n"; // updated sum
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}