#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    string results;
    int games;
    cin>>games;
    cin>>results;
    int win=0;
    for(auto i:results){
        win += i=='A'?1:-1;
    }
    if(win>0){
        cout<<"Anton"<<endl;
    }else if(win==0){
        cout<<"Friendship"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }

    
    return 0;
}