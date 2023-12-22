#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int main(){
    int teams;
    cin>>teams;
    int ctr=0;
    int uniform[teams][2];
    for(int i=0;i<teams;i++){
        cin>> uniform[i][0] >> uniform[i][1];
      
    }
    for(int i=0;i<teams;i++){
        for(int j=0;j<teams;j++){
            if(uniform[i][0]==uniform[j][1]){
                ctr+=1;
            }
        }
       
    }
    cout<<ctr;
    return 0;
}