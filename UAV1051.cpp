#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int m,n,count=0;
    cin>>n;
    while(n){
        
        if(n==0){
            break;
        }
        count=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count%2==0){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
        cin>>n; 
    }


    
    return 0;
}