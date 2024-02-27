#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
        ull n;
        cin>>n;
        ull count=0, num[n];
        
        loop(i,0,n){
            
            count =0;
            cin>>num[i];
            if(num[i]%2==0 && num[i] != 4){
                cout<<"NO"<<endl;
                continue;
            }
            loop(j,2,sqrt(num[i])+1){
                if(num[i]%j==0){
                    count+=1;
                    if(j!=(num[i]/j)){
                        count+=1;
                        break;  
                    }
                }
            }
            if(count==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        
        

    
    return 0;
}