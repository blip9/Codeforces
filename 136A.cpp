#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        arr[j-1] = i+1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    
    return 0;
}