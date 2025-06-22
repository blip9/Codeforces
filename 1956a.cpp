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
    int t ;
    cin>>t;
    while(t--){
        int k ,q;
        cin>>k>>q;
        vector<int> a;
        vector<int> n;
        for(int i=0;i<k;i++){
            int input;
            cin>>input;
            a.push_back(input);
        }
        for(int i=0;i<q;i++){
            int input;
            cin>>input;
            n.push_back(input);
        }
        
        for(int i=0;i<q;i++){
            int count = 0;
            if(n[i]<a[0])cout<<n[i]<<"  ";
            else{
                
                cout<<a[0]-1<<"  ";
            }
            cout<<endl; 
        }
    }

    
    return 0;
}x