#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    char dir;
    cin>>dir;
    string layout;
    string layouti="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(dir=='R'){
        layout = " qwertyuiopasdfghjkl;zxcvbnm,./";
    }else{
        layout = "wertyuiopasdfghjkl;zxcvbnm,./ ";
    }
    
    string initial ;
    string final="";
    cin>>initial;
    
    for(auto i:initial){
        int index = layouti.find(i);
        final += layout[index];
    }
    cout<<final;


    
    return 0;
}