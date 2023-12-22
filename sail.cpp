#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,x0,y0,xf,yf;
    string direction;
    cin>>t>>x0>>y0>>xf>>yf;
    cin>>direction;
    int a= -1;
    for(int i=0;i<t+1;i++){
        if(xf==x0 && yf==y0){
            cout<<i;
            return 0;
        }

        if(xf>x0){
            if(direction[i]=='E')
                x0+=1;
            
        }
        if(xf<x0){
            if(direction[i]=='W')
                x0-=1;
            
        }
        if(yf>y0){
            if(direction[i]=='N')
                y0+=1;
            
        }
        if(yf<y0){
            if(direction[i]=='S')
                y0-=1;
            
        }
        
        


    }
    cout<<a;
            

    return 0;
}