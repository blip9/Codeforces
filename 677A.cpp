#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int n,heightf,sum=0;
    cin>>n>>heightf;
    vector<int> flist;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>heightf){
            sum+=2;
            
        }else{
            sum++;
        }
    }
    cout<<sum;

    
    return 0;
}