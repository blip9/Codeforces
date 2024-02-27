#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int price,burle;
    cin>>price>>burle;
    int temp=0,count=0;
    for(int i=1;i<10;i++){
        temp += price;
        count++;
        if(temp%10==burle || temp%10==0 ){
            cout<<count;
            return 0;
        }
        
    }
    cout<<10;


    
    return 0;
}