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
        
        if(n==k){
            int j=0;
            for(int i=4;i<4+n;i++){
                cout<<4<<endl;
                j++;
            }
        }else if(k>1){
            cout<<-1;
        }else{
            int j=0;
            for(int i=4;i<4+n;i++){
                if(j==n-1)cout<<3<<endl;
                else    cout<<i<<endl;
                j++;
            }
        }
        cout<<endl;
    }

    
    return 0;
}