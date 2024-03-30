#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int nm=1 , mn=1;
    for(int i=0;i<m;i++){
        nm *= n;
    }
    for(int i=0;i<n;i++){
        mn *= m;
    }
    cout<<nm<<endl;
    cout<<mn<<endl;


    
    return 0;
}