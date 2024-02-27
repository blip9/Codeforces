#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int a,b,years=0;
    cin>>a>>b;
    while(a<b || a==b){
        a = a*3;
        b = b*2;
        years++;
    }

    cout<<years;
    
    return 0;
}