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
        string s;
        cin>>s;
        int f0=-1,f1=-1;
        long long total = 0;
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='1'){
                if(f1==-1)f1=i;
            }else if(i!=0 && f1!=-1){
                total+= i-f1+1;
                f1++;
                
            }
        }
        cout<<total<<endl;
    }
    
    return 0;
}