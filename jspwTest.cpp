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
    string layout[3] = {"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
    char a;
    string final;
    cin>>a;
    while(a){
        for(auto i:layout){
            for(int j=0;j<i.length();j++){
                if(i[j]==a){
                    final += dir=='R'?i[j-1]:i[j+1];
                }
            }
        }
    }
    cout<<final;


    
    return 0;
}