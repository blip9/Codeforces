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
    int steps = 0;
    cin>>arr[0];
    for(int i=1;i<n;i++){
            int num;
            cin>>num;
            if(num>arr[i-1]){
                arr[i]=num;
            }else if(num<arr[0]){
                arr[i]=num;
                steps++;
            }    
            else{
                cout<<-1;
                return 0;
            }
        
    }
    cout<<steps;



    
    return 0;
}