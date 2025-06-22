#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MOD = 1e9+7;
const int INF = 1e18;

int f(int row,int k,int n,vector<vector<int>>&dp){
    if(row==n)return 1;

    if(dp[row][k]!=-1)return dp[row][k];
    
    int ways = 0;
    if(k){
        ways += 4*f(row+1,k,n,dp) + f(row+1,!k,n,dp);
    }else{
        ways += 2*f(row+1,k,n,dp) + f(row+1,!k,n,dp);
    }
    return dp[row][k] = ways;
}
void solve() {
    // Write your solution here
    int n;cin>>n;
    vector<vector<int>>dp(n,vector<int>(2,-1));
    cout<<f(1,0,n,dp) + f(1,1,n,dp)<<endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}