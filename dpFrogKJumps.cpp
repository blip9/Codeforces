#include<bits/stdc++.h>
#define ll long long int
#define  mod 1000000000+7
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int helper(int n,vector<int>&heights,vector<int>&mte,int k){
    if(n==1)return 0;
    if(mte[n]!=-1)return mte[n];
    mte[n] = INT_MAX;
    for(int i=1;i<=k;i++){
        int num = INT_MAX;
        if(n-i>0){
            num = helper(n-i,heights,mte,k) + abs(heights[n-1]-heights[n-i-1]);
            mte[n] = min(mte[n],num);
        }
    }
    
    return mte[n];;


}

// int frogJump(int n, vector<int> &heights,int k)
// {
//     // Write your code here.
//     vector<int>mte(n+1,-1);
    
//     return helper(n,heights,mte,k);
    
// }
int frogJump(int n,vector<int>&heights,int k){
    vector<int>mte(n+1,INT_MAX);
    mte[1] = 0;
    // mte[2] = abs(heights[1] - heights[0]);
    
    
    for(int i=2;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=1){
                mte[i] =  min(mte[i],mte[i-j] +abs(heights[i-1]-heights[i-j-1]));
            }
        }
    }
    return mte[n];

}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    /*ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    endif*/
    int n,k;cin>>n>>k;
    vector<int>h(n);
    for(int i=0;i<n;i++)cin>>h[i];

    cout<<frogJump(n,h,k)<<endl;
    
    return 0;
}

