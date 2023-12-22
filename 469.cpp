#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> levels;
    int p;
    cin>>p;
    int x,y;
    for(int i=0;i<p;i++){
        cin>>x;
        levels.insert(x);
        
    }
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>x;
        levels.insert(x);
        
    }
    
    
    if(levels.size()<n){
            cout<<"Oh, my keyboard!";
            return 0;
    }
   

    cout<<"I become the guy.";

    return 0;
}   