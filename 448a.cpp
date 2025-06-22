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
    double a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    int n;
    cin>>n;
    double cupr = ceil((a1+a2+a3)/5);
    double medalr = ceil((b1+b2+b3)/10);
    if(cupr+medalr<=n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    
    return 0;
}