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
        int n,k;
        cin>>n>>k;
        int kc = k;
        int msb=0;
        if(n==1){
            cout<<k<<endl;
            continue;
        }
        while(kc/2!=0){
            msb++;
            kc = kc/2;
        }
        msb++;
        int a[n]={0};
        a[0] = (1<<(msb-1))-1;
        a[1] = k-a[0];
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}