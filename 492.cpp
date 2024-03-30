#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    double lamps[n];

    for(int i=0;i<n;i++){
        cin>>lamps[i];
    }
    sort(lamps,lamps+n);
    double first = lamps[0] - 0;
    double last = l - lamps[n-1];
    double greatest = 0;
    
    for(int i= 0;i<n-1;i++){
        greatest = (lamps[i+1]-lamps[i])>greatest?(lamps[i+1]-lamps[i]):greatest;

    }
    if(first>greatest/2 && first>last){
        cout<<first;
        return 0;
    }else if(last>greatest/2){
        cout<<last;
        return 0;
    }
    cout<<fixed<<setprecision(9)<<greatest/2;
    
    return 0;
}