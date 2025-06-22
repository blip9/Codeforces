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
        int a[101]={0};
        loop(i,0,n){
            int temp;
            cin>>temp;
            a[temp]++;
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        int temp =0;
        for(int i=0;i<101;i++){
            if(a[i]>=k){
                cout<<k-1<<endl;
                temp =1;
                break;
            }
            
        }
        if(temp==1)continue;
        cout<<n<<endl;
    }

    
    return 0;
}