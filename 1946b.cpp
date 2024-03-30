#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
#define M 1000000000+7;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        deque<int> a;
        long long int sum =0;
        loop(i,0,n){
            int an;
            cin>>an;
            a.push_back(an);
            sum += an;
            sum%=M;
        }
        
            long long int curr=0,max=INT16_MIN;
            loop(j,0,a.size()){
                curr = a[j]>curr+a[j]?a[j]:curr+a[j];
                if(curr>max){
                    max = curr;
                }
                if(curr<0){
                    curr =0;
                }
                
            }   
        max %= M;
        if(max<0){
            max=0;
        }
        for(int i=0;i<k;i++){
            sum += max;
            sum%=M;
            max *=2;
            max %= M;
        }
        if(sum<0){
            long long int final = sum+M;
            cout <<final << endl;
            continue;
        }
        cout<<sum<<endl;
    }


    
    return 0;
}