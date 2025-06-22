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
        int n;
        cin>>n;
        vector<int> p;
        p.push_back(0);
        loop(i,0,n){
            int temp;
            cin>>temp;
            p.push_back(temp);
        }
        bool flag = true;
        for(int i=1;i<=n;i++){
            if(i==p[p[i]]){
                flag = false;
            }
        }
        if(flag==false)cout<<2<<endl;
        else cout<<3<<endl;
    }

    
    return 0;
}