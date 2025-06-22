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
    while (t--)
    {
        int n;
        cin>>n;
        int max=0;
        vector<int>a(n,0);
        int sum=0;
        loop(i,0,n){
            cin>>a[i];
            
        }
        sort(a.begin(),a.end());
        max = a[a.size()-1];
        int mexsize=1;
        for(auto i:a){
            if(i==mexsize){
                mexsize++;

            }
        }
        int turns =mexsize<max?mexsize:max;
        if(turns%2==1)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
        
        
    }
    

    
    return 0;
}