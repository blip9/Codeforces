#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    set<char> q;
    string name;
    cin>>name;
    for(auto i:name){
        q.insert(i);
    }
    if(q.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else cout<<"IGNORE HIM!"<<endl;


    
    return 0;
}