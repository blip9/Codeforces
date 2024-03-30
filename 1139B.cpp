#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int i;
    cin>>i;
    ll a[i],last=0,final=0;
    int count=0;
    for(int j=i-1;j>=0;j--){
        cin>>a[j];
        count++;

    }
    if(count==1){
        cout<<a[0];
        return 0;
    }
    for(int j=0;j<i;j++){
        if(a[j]<=a[j+1] && j+1<i && a[j]>0){
            a[j+1] = a[j]-1;
        }else if(a[j]<=a[j+1] && a[j]==0 && j+1<i){
            a[j+1]=0;
        }
        if(a[i-1]>=a[i-2] && a[i-2]!=0){
            a[i-1] = a[i-2]-1;
        }else if(a[i-1]>=a[i-2] && a[i-2]==0){
            a[i-1]=0;
        }
    }
    for(int j=0;j<i;j++){
        final += a[j];
    }
    cout<<final;

    
    return 0;
}