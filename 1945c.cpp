#include<bits/stdc++.h>

#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
    int T;
    cin>>T;
    loop(i,0,T){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int sum =0;
        int f[n];
        f[0]=1;
        sum+=1;
        priority_queue<int,vector<int>,less<>> left;
        priority_queue<int,vector<int>,greater<>> right;
        left.push(1);
        loop(i,2,n+1){
           int term = (a*left.top() + b*i + c)%1000000007 ;
           sum += term;
           
           if(left.top()>term){
            left.push(term);
           }else{
            right.push(term);
           }

            while (left.size()>right.size()+1)
            {
                /* code */right.push(left.top());
                left.pop();
            }
            while(right.size()>left.size()){
                left.push(right.top());
                right.pop();
            }
            
        }
    
        cout<<sum<<endl;
    }    
    

    
    return 0;
}