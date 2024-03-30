#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    /*ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    endif*/
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string c ;
        int hour = 10*((int)s[0]-48)+(int)(s[1]-48);
        if(hour>12){
            hour -= 12;
            if(hour<10){
                cout<<'0'<<hour;
                s+= " PM";
            }else{
                cout<<hour;
                s+= " PM";
            }
        }else if(hour==12){
            cout<<hour;
            s+= " PM";
        }
        else if(hour==0){
            cout<<"12";
            s+= " AM";
        }else if(hour<10){
            cout<<'0'<<hour;
            s+= " AM";
        }else{
            cout<<hour;
            s+= " AM";
        }
        
        for(int i=2;i<8;i++){
            cout<<s[i];
        }
        cout<<endl;
    }

    
    return 0;
}