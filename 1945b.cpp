#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long int a,b,m,temp;
        cin>>a>>b>>m;
        long long int max =0;
        if(a>m && b>m && b-a<m){
            cout<<2<<endl;
            continue;
        }else if(a<=m && b<=m){
            int maxab = a>b?a:b;
            max += (maxab+m)/a;
            
            max += (maxab+m)/b;
            cout<< max<<endl;
            continue;

        }
    }
    


    
    return 0;
}