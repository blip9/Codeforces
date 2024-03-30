#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
    for(int i=1;i<=n;i++){
        result += (i*i*i) - (i*i);
    }

    cout<<result;
    
    return 0;
}