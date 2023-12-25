#include<bits/stdc++.h>
#include<algorithm>
#include<iterator>
#define ll long long int
#define ull unsigned long long int
#define vec vector<int>
#define llvec vector<long long int>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    
    sort(b,b+n);
    for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                break; 
            }else if(i+1==n){
                cout<<"yes"<<endl;
                cout<<1<<endl;
                cout<<1<<endl;
                return 0;
            }

        }
    int begin =0 ,end = 0;
    for(int i=0;i<n-1;i++){
        if((a[i]>a[i+1]) ){
            if(begin==0&&end==0){
                begin = i;
                end = i+1;
            }else{
                end++;
            }
        }else if((end!=0) && (a[i]<a[i+1])){
            break;
        }
    }
    if(begin==0 && end==0){
        cout<<"no";
    }else{
        reverse(a+begin,a+end+1);
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                cout<<"no";
                return 0;
            }

        }
        cout<<"yes"<<endl;
        cout<<begin+1<<endl;
        cout<<end+1<<endl;
    }
    return 0;
}