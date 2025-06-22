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
        vector<int> a;
        int p =-1;
        int begin = -1;
        int j = n-1;
        loop(i,0,n){    
            int temp;
            cin>>temp;
            a.push_back(temp);
            if(a[i] != a[0]){
                if(begin==-1){
                    p = i;
                    begin = i;
                    p = n-1-i<p?n-1-i:p;
                }else{
                    p = i-1-begin<p?i-begin-1:p;
                    p = n-i-1<p?n-i-1:p;
                    
                    begin = i;
                }
            }
            
            
        }
        
        cout<<p<<endl;

    }

    
    return 0;
}