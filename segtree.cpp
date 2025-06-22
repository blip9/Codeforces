#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

const int N = 1e5 + 5;
int a[N], seg[4 * N]; // 4*N size for segment tree

// Build the segment tree
void build(int ind, int l, int r) {
    if (l == r) {
        seg[ind] = a[l];
        return;
    }

    int mid = l + (r - l) / 2;

    build(2 * ind + 1, l, mid);
    build(2 * ind + 2, mid + 1, r);

    seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
}

// Query sum in range [l, r]
int query(int ind, int low, int high, int l, int r) {
    if (low >= l && high <= r) {
        return seg[ind]; // complete overlap
    }

    if (high < l || low > r) return 0; // no overlap

    int mid = low + (high - low) / 2;

    return query(2 * ind + 1, low, mid, l, r) +
           query(2 * ind + 2, mid + 1, high, l, r);
}

int main() {
    fast_io;

    int n, q;
    cin >> n >> q;

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    build(0, 0, n - 1);

    // Handle queries
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << query(0, 0, n - 1, l, r) << "\n";
    }

    return 0;
}
