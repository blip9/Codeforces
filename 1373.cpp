#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    loop(i,0,n){
        long double a,b,c;
        cin>>a>>b>>c;
        if(c<a){
            cout<<-1<<endl;
            cout<<(int)(b)<<endl;
        }else if(c/b==a){
            cout<<1<<endl;
            cout<<-1<<endl;
        }else if(a>c/b && a>=c){
            cout<<-1<<endl;
            cout<<(int)(b)<<endl;
        }
        else if(a>c/b  && c<a*b){
            cout<<1<<endl;
            cout<<(int)(b)<<endl;

        }else if(a<c/b){
            cout<<1<<endl;
            cout<<-1<<endl;
        }
    }

    
    return 0;
}