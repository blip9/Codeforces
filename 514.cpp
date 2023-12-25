#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main(){
    ll x;
    cin>>x;
    ll req=0;
    ll i=0;
    ll y;
    while(x>9){
        y = x%10;
        y = (y>9-y)?9-y:y;
        req += pow(10,i)*y;
        i++;
        x/=10;
    }
    y=x;
    if(x==9){
        req += pow(10,i)*y;
    }else{
        y = (y>9-y)?9-y:y;
        req += pow(10,i)*y;
    }
    cout<<req;
    return 0;
}