#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    if(k>n/2&&n%2==0){
        cout<<2*(k-n/2);
    }else if(k>(n/2)+1 && n%2!=0){
        cout<<2*(k-(n/2)-1);
    
    }else{
        cout<<1+2*(k-1);
    }
    return 0;
}