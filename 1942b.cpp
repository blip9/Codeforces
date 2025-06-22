#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
#include <vector>
#include <unordered_set>

using namespace std;

inline int mex(const vector<int>& arr){
    unordered_set<int> s(arr.begin(), arr.end());
    int mex = 0;
    while (s.count(mex)) {
        mex++;
    }
    return mex;
}

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
        vector<int> f;
        set<int> final;
        loop(i,0,n){
            int p;
            cin>>p;
            a.push_back(p);
        }
        
        for(int i=0;i<n;i++){
            if(i==0){
                if(a[i]<0){
                    f.push_back(-a[i]);
                }else if(a[i]>0){
                    f.push_back(0);
                }else{
                    f.push_back(1);
                }
            }
            else{
                
                for(int j=0;j<2*n;j++){
                    f.push_back(j);
                    if(mex(f)-j==a[i]){
                        f.pop_back();
                        if(find(f.begin(),f.end(),j)==f.end()){
                            f.push_back(j);
                            break;
                        }
                        
                    }else{
                        f.pop_back();
                    }
                }
            }
        }
        for(auto i:f){
            cout<<i<<endl;
        }
        cout<<endl;
    }

    
    return 0;
}
