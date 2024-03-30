#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
void checksort(int a[],int n,int k){
    loop(i,0,n){
            if(a[i]<a[i-1] && k<=1 && i>0){
                cout<<"NO"<<endl;
                return;
            }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int a[n];
        string result;
        loop(i,0,n){
            cin>>a[i];
        }
        checksort(a,n,k);
        

    }
    return 0;
}