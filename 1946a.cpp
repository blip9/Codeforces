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
    loop(i,0,t){
        int n;
        cin>>n;
        int a[n];
        loop(i,0,n){
            cin>>a[i];

        }
        sort(a,a+n);
        int median = ceil((double)n/2.0)-1;
        int count =0;
        int currentMedian = a[median];
        for(int i=median;i<n;i++){
            if(a[i]==currentMedian){
                count++;
            }
        }
        cout<<count<<endl;
    }

    
    return 0;
}