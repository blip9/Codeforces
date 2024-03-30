#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    /*ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    endif*/
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char mat[2*n][2*n];
        for(int i=0;i<2*n;i++){
            int k = i/2;
                if(k%2==0){
                    for(int j=0;j<2*n;j++){
                        int k = j/2;
                        if(k%2==0){
                            cout<<"#";
                        }else{
                            cout<<".";
                        }
                    }
                }else{
                    for(int j=0;j<2*n;j++){
                        int k = j/2;
                        if(k%2==0){
                            cout<<".";
                        }else{
                            cout<<"#";
                        }
                    }
                }
            
            cout<<endl;
        }
    }

    
    return 0;
}