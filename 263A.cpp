#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int a,m,n;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
             cin>>a;
             if(a==1){
                m = i+1;
                n = j+1;
             }
        }

    }
    m = m>3?m-3:3-m;
    n = n>3?n-3:3-n;
    cout<<m+n<<endl;


    
    return 0;
}