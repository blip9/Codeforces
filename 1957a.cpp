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
        int a[101]={0};
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a[temp] ++;
        }
        int count =0;
        for(int i=0;i<101;i++){
            count += a[i]/3;
        }
         cout<<count<<endl;
    }


    
    return 0;
}