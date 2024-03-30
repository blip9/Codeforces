#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    double r,x,y,xf,yf;
    cin>>r>>x>>y>>xf>>yf;
    long double dist = sqrt((xf - x) * (xf - x) + (yf - y) * (yf - y));
    cout<<ceil(dist/(2*r))<<endl;



    
    return 0;
}