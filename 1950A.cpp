#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        string result = "NONE";
        result = (a<b && c>b)?"STAIR":result;
        result = (a<b && c<b)?"PEAK":result;
        cout<<result<<endl; 
    }


    
    return 0;
}