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
    for(int i=0;i<n;i++){
        int a,b,c,tent=0;
        cin>>a>>b>>c;
        if(c<3-b%3 && b%3!=0){
            cout<<-1<<endl;
            continue;
        }
        c -= 3 - b%3;
        b += 3 - b%3;
        
        tent += a;
        tent += b/3;

        tent += ceil((double)c/3.0);
        
        cout<<tent<<endl;
    }
    

    
    return 0;
}