#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int len,d;
    cin>>len>>d;
    if(len==1 &&d == 0){
        cout<<0<<endl;
        return 0;
    }else if(d==0 && len>1){
        cout<<"No solution"<<endl;
        return 0;
    }
    cout<<d;
    for(int i=1;i<len;i++){
        cout<<0;
    }


    
    return 0;
}