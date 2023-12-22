#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int i=0 ; i<testcases ; i++){
        int n;
        cin>>n;
        
        int elements[n] , elements1[n];
        for(int i =0 ;i<n ;i++){
            cin>>elements[i];
            elements1[i]=elements[i];

        }
       
        sort(elements1,elements1+n);
        for(int j=0 ; j<n ;j++){
            long long score=0 ;
            int count=0;
            int count1 =0;
            score = elements[j];
            for(int i =0 ;i<n ;i++){
                if(elements1[i]==elements[j]){
                    count1 +=1;
                }
                
                if((elements1[i]<=score  && elements1[i] == elements[j] &&  count1>1) || elements1[i]<=score  && elements1[i] != elements[j]){
                    count+=1;
                    score+= elements1[i];
                    
                }
            }
            cout<<count<<" ";

        }
        cout<<endl;

    }
    
    return 0 ;
}