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
    float fgap=0,gap=0;
    double lamps[n];

    for(int i=0;i<n;i++){
        cin>>lamps[i];
    }

    sort(lamps,lamps+n);

    if(lamps[0]!= 0){
        fgap = lamps[0];
    }
    if(lamps[n-1]!=l){
        if(fgap<l-lamps[n-1]){
            fgap = l-lamps[n-1];
        }
    }
    for(int i=0;i<n-1;i++){
        gap  = (lamps[i+1]-lamps[i])/(float)2;
        if(gap>fgap){
            fgap = gap;
        }
    }
    printf("%f",fgap);
    return 0;
}