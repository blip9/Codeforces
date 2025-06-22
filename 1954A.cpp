#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    /*ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    endif*/
    int t;
    cin>>t;
    while(t--){
        double n,m,k;
        cin>>n>>m>>k;
        int r =  n - ceil(n/m);
        if(n==1  ||m==1 || r<=k){
            cout<<"NO"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }

    
    return 0;
}
