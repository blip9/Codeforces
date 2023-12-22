#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    int result = 0;
    if(b<m*a){
        if(n>m){
            result+=b*(n/m);
            n = n%m ;
        }
        result += n*a>b?b:n*a;
    }else{
        result += n*a;
    }
    cout<<result;
    return 0;
}