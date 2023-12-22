#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin >> n>>m;
    
    if(m>=n){
        if(n%2 == 0){
            cout<<"Malvika";
        }
        else{
            cout<<"Akshat";
        }
        
    }
    if(m<n){
        if(m%2 == 0){
            cout<<"Malvika";
        }
        else{
            cout<<"Akshat";
        }
    }
    return 0;
}